add_library(module01_intro STATIC src/intro.cpp)
target_include_directories(module01_intro PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module01_intro)

add_executable(module01_intro_demo src/main.cpp)
target_link_libraries(module01_intro_demo PRIVATE module01_intro)
add_curriculum_defaults(module01_intro_demo)

if(BUILD_TESTING)
    add_executable(module01_intro_tests tests/test_intro.cpp)
    target_link_libraries(module01_intro_tests PRIVATE module01_intro Catch2::Catch2WithMain)
    add_curriculum_defaults(module01_intro_tests)
    add_test(NAME module01_intro_tests COMMAND module01_intro_tests)
endif()
