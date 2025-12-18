add_library(module02_types STATIC src/types.cpp)
target_include_directories(module02_types PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module02_types)

add_executable(module02_types_demo src/main.cpp)
target_link_libraries(module02_types_demo PRIVATE module02_types)
add_curriculum_defaults(module02_types_demo)

if(BUILD_TESTING)
    add_executable(module02_types_tests tests/test_types.cpp)
    target_link_libraries(module02_types_tests PRIVATE module02_types Catch2::Catch2WithMain)
    add_curriculum_defaults(module02_types_tests)
    add_test(NAME module02_types_tests COMMAND module02_types_tests)
endif()
