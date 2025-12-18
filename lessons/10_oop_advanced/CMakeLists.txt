add_library(module10_oop_advanced STATIC src/polymorphism.cpp)
target_include_directories(module10_oop_advanced PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module10_oop_advanced)

add_executable(module10_oop_advanced_demo src/main.cpp)
target_link_libraries(module10_oop_advanced_demo PRIVATE module10_oop_advanced)
add_curriculum_defaults(module10_oop_advanced_demo)

if(BUILD_TESTING)
    add_executable(module10_oop_advanced_tests tests/test_polymorphism.cpp)
    target_link_libraries(module10_oop_advanced_tests PRIVATE module10_oop_advanced Catch2::Catch2WithMain)
    add_curriculum_defaults(module10_oop_advanced_tests)
    add_test(NAME module10_oop_advanced_tests COMMAND module10_oop_advanced_tests)
endif()
