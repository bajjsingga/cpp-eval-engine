# cpp-eval-engine

A high-performance, asynchronous C++ evaluation engine designed to profile, benchmark, and evaluate LLM-generated C++ code in containerized sandboxes.

## Key Features

* **Static Code Analysis:** Integrates `clang-tidy` and `cppcheck` to detect syntax errors, code smells, and anti-patterns in LLM outputs.
* **Containerized Sandbox:** Runs untrusted code inside isolated Docker containers with strict CPU time and memory limits.
* **Runtime & Memory Profiling:** Tracks execution latency and monitors memory allocation/leaks via Valgrind & AddressSanitizer (ASan).
* **Automated Scoring System:** Generates a deterministic Quality Index score based on compile-time success, static analysis warnings, runtime efficiency, and test assertion passes.

## Architecture & Tech Stack

* **Language:** C++20 (Smart pointers, concepts, RAII, multithreading)
* **Build System:** CMake
* **Containerization:** Docker
* **Testing & Tools:** GoogleTest, Clang-Tidy, Valgrind

