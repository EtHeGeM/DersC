# C++ University Curriculum

Production-oriented 12-module C++17 curriculum with runnable examples, unit tests, and CI. Build with CMake and Catch2.

## Quick start
1. `cmake -S . -B build` 
2. `cmake --build build`
3. `ctest --test-dir build`

## Layout
- `lessons/`: per-module code, exercises, and tests
- `docs/`: syllabus, setup, and reference notes
- `scripts/`: formatting and sanitizer helpers
- `third_party/`: vendored/build-time dependencies (Catch2 via FetchContent)

## Toolchain
- Compiler: C++17 or newer with `-Wall -Wextra -Wpedantic`
- CMake 3.16+

## CI
GitHub Actions builds and tests on Ubuntu with the default toolchain.

## License
Educational use; adapt for your institution.
