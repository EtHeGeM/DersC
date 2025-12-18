add_library(module05_arrays STATIC src/arrays_strings.cpp)
target_include_directories(module05_arrays PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module05_arrays)

add_executable(module05_arrays_demo src/main.cpp)
target_link_libraries(module05_arrays_demo PRIVATE module05_arrays)
add_curriculum_defaults(module05_arrays_demo)

if(BUILD_TESTING)
    add_executable(module05_arrays_tests tests/test_arrays_strings.cpp)
    target_link_libraries(module05_arrays_tests PRIVATE module05_arrays Catch2::Catch2WithMain)
    add_curriculum_defaults(module05_arrays_tests)
    add_test(NAME module05_arrays_tests COMMAND module05_arrays_tests)
endif()
