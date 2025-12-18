add_library(module08_structs STATIC src/model.cpp)
target_include_directories(module08_structs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module08_structs)

add_executable(module08_structs_demo src/main.cpp)
target_link_libraries(module08_structs_demo PRIVATE module08_structs)
add_curriculum_defaults(module08_structs_demo)

if(BUILD_TESTING)
    add_executable(module08_structs_tests tests/test_model.cpp)
    target_link_libraries(module08_structs_tests PRIVATE module08_structs Catch2::Catch2WithMain)
    add_curriculum_defaults(module08_structs_tests)
    add_test(NAME module08_structs_tests COMMAND module08_structs_tests)
endif()
