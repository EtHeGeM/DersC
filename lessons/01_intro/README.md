# Module 01: Intro + Toolchain

## Concepts
- Compiler vs linker; translation units; headers and include guards
- CMake fundamentals and out-of-source builds
- Basic I/O with iostream
- Debug/build types (Debug/Release) and warning flags

## Why it matters
Engineering teams need reproducible builds, debuggability, and consistent toolchains. Knowing how the compiler and linker cooperate avoids linkage errors and speeds up iteration.

## Common pitfalls
- Mixing build artifacts inside source tree
- Forgetting to enable warnings or using mismatched compiler/linker settings
- Relying on implicit includes instead of explicit headers
- Ignoring return codes from shell commands and builds

## Micro-lab (10–20 minutes)
Build and run the provided "hello" example. Modify the greeting to include your username and rerun. Inspect the build directory structure and generated compile commands.

## Exercises
1. [easy] Add a function that returns the current year and print it in `main`.
2. [easy] Modify the greeting to accept a command-line argument for the name.
3. [medium] Add a new executable that prints compiler version and standard in use.
4. [medium] Introduce `-Werror` locally and fix any resulting warnings.
5. [hard] Configure a separate CMake target that builds with AddressSanitizer enabled and compare runtime behavior.
