#!/usr/bin/env bash
set -euo pipefail

BUILD_DIR="build-asan"
cmake -S .. -B "$BUILD_DIR" -DENABLE_SANITIZER=ON -DCMAKE_BUILD_TYPE=Debug
cmake --build "$BUILD_DIR"
CTEST_OUTPUT_ON_FAILURE=1 ctest --test-dir "$BUILD_DIR"
