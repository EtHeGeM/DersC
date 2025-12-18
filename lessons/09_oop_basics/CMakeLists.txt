add_library(module09_oop_basics STATIC src/account.cpp)
target_include_directories(module09_oop_basics PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module09_oop_basics)

add_executable(module09_oop_basics_demo src/main.cpp)
target_link_libraries(module09_oop_basics_demo PRIVATE module09_oop_basics)
add_curriculum_defaults(module09_oop_basics_demo)

if(BUILD_TESTING)
    add_executable(module09_oop_basics_tests tests/test_account.cpp)
    target_link_libraries(module09_oop_basics_tests PRIVATE module09_oop_basics Catch2::Catch2WithMain)
    add_curriculum_defaults(module09_oop_basics_tests)
    add_test(NAME module09_oop_basics_tests COMMAND module09_oop_basics_tests)
endif()
