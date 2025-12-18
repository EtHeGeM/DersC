# Environment Setup

## Requirements
- C++17 compiler (GCC 10+, Clang 11+, or MSVC 2019+)
- CMake 3.16+
- Git (for CI/local workflow)

## Build
```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build
```

### Sanitizer build
```bash
cmake -S . -B build-asan -DENABLE_SANITIZER=ON
cmake --build build-asan
CTEST_OUTPUT_ON_FAILURE=1 ctest --test-dir build-asan
```

## Tooling
- `.clang-format` defines code style
- `scripts/format.sh` formats sources
- `scripts/run_sanitizer.sh` builds/tests with ASAN

## IDE tips
- Enable compile commands: `-DCMAKE_EXPORT_COMPILE_COMMANDS=ON`
- Configure CMake profile with `Debug` for learning and `Release` when benchmarking
