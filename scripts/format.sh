#!/usr/bin/env bash
set -euo pipefail

find .. \\( -name \"*.cpp\" -o -name \"*.hpp\" -o -name \"*.h\" \\) -print0 | xargs -0 -r clang-format -i
