add_library(module11_stl STATIC src/stl_examples.cpp)
target_include_directories(module11_stl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module11_stl)

add_executable(module11_stl_demo src/main.cpp)
target_link_libraries(module11_stl_demo PRIVATE module11_stl)
add_curriculum_defaults(module11_stl_demo)

if(BUILD_TESTING)
    add_executable(module11_stl_tests tests/test_stl_examples.cpp)
    target_link_libraries(module11_stl_tests PRIVATE module11_stl Catch2::Catch2WithMain)
    add_curriculum_defaults(module11_stl_tests)
    add_test(NAME module11_stl_tests COMMAND module11_stl_tests)
endif()
