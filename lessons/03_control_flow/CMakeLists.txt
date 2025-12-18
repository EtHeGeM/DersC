add_library(module03_control STATIC src/flow.cpp)
target_include_directories(module03_control PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module03_control)

add_executable(module03_control_demo src/main.cpp)
target_link_libraries(module03_control_demo PRIVATE module03_control)
add_curriculum_defaults(module03_control_demo)

if(BUILD_TESTING)
    add_executable(module03_control_tests tests/test_flow.cpp)
    target_link_libraries(module03_control_tests PRIVATE module03_control Catch2::Catch2WithMain)
    add_curriculum_defaults(module03_control_tests)
    add_test(NAME module03_control_tests COMMAND module03_control_tests)
endif()
