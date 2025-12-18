add_library(module04_functions STATIC src/modular.cpp)
target_include_directories(module04_functions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module04_functions)

add_executable(module04_functions_demo src/main.cpp)
target_link_libraries(module04_functions_demo PRIVATE module04_functions)
add_curriculum_defaults(module04_functions_demo)

if(BUILD_TESTING)
    add_executable(module04_functions_tests tests/test_modular.cpp)
    target_link_libraries(module04_functions_tests PRIVATE module04_functions Catch2::Catch2WithMain)
    add_curriculum_defaults(module04_functions_tests)
    add_test(NAME module04_functions_tests COMMAND module04_functions_tests)
endif()
