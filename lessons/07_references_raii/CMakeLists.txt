add_library(module07_raii STATIC src/raii.cpp)
target_include_directories(module07_raii PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module07_raii)

add_executable(module07_raii_demo src/main.cpp)
target_link_libraries(module07_raii_demo PRIVATE module07_raii)
add_curriculum_defaults(module07_raii_demo)

if(BUILD_TESTING)
    add_executable(module07_raii_tests tests/test_raii.cpp)
    target_link_libraries(module07_raii_tests PRIVATE module07_raii Catch2::Catch2WithMain)
    add_curriculum_defaults(module07_raii_tests)
    add_test(NAME module07_raii_tests COMMAND module07_raii_tests)
endif()
