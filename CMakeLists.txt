cmake_minimum_required(VERSION 3.16)
project(cpp_eval_engine VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

# Add source files
add_executable(cpp_eval_engine 
    src/main.cpp 
    src/Evaluator.cpp
)
