add_library(module12_files STATIC src/analysis.cpp)
target_include_directories(module12_files PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_curriculum_defaults(module12_files)

add_executable(sensor_log_analyzer src/main.cpp)
target_link_libraries(sensor_log_analyzer PRIVATE module12_files)
add_curriculum_defaults(sensor_log_analyzer)

if(BUILD_TESTING)
    add_executable(module12_files_tests tests/test_analysis.cpp)
    target_link_libraries(module12_files_tests PRIVATE module12_files Catch2::Catch2WithMain)
    add_curriculum_defaults(module12_files_tests)
    add_test(NAME module12_files_tests COMMAND module12_files_tests)
endif()
