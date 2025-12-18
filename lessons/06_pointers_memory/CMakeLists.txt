add_library(module06_pointers STATIC src/pointers.cpp)
target_include_directories(module06_pointers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module06_pointers)

add_executable(module06_pointers_demo src/main.cpp)
target_link_libraries(module06_pointers_demo PRIVATE module06_pointers)
add_curriculum_defaults(module06_pointers_demo)

if(BUILD_TESTING)
    add_executable(module06_pointers_tests tests/test_pointers.cpp)
    target_link_libraries(module06_pointers_tests PRIVATE module06_pointers Catch2::Catch2WithMain)
    add_curriculum_defaults(module06_pointers_tests)
    add_test(NAME module06_pointers_tests COMMAND module06_pointers_tests)
endif()
