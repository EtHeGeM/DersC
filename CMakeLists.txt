cmake_minimum_required(VERSION 3.16)
project(cpp_university_curriculum LANGUAGES CXX)

option(ENABLE_SANITIZER "Build with AddressSanitizer" OFF)

include(CTest)

# Fetch Catch2 for tests
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.5.2
)
FetchContent_MakeAvailable(Catch2)

function(add_curriculum_defaults target)
    target_compile_features(${target} PUBLIC cxx_std_17)
    target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic)
    if(ENABLE_SANITIZER)
        target_compile_options(${target} PRIVATE -fsanitize=address)
        target_link_options(${target} PRIVATE -fsanitize=address)
    endif()
endfunction()

# Aggregate lessons
add_subdirectory(lessons/01_intro)
add_subdirectory(lessons/02_types_operators)
add_subdirectory(lessons/03_control_flow)
add_subdirectory(lessons/04_functions_modular)
add_subdirectory(lessons/05_arrays_strings)
add_subdirectory(lessons/06_pointers_memory)
add_subdirectory(lessons/07_references_raii)
add_subdirectory(lessons/08_struct_modeling)
add_subdirectory(lessons/09_oop_basics)
add_subdirectory(lessons/10_oop_advanced)
add_subdirectory(lessons/11_stl)
add_subdirectory(lessons/12_files_project)

if(BUILD_TESTING)
    enable_testing()
endif()
