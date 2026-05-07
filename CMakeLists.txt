# 1. Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# 2. Project Name (e.g., Structural Solver)
project(FEM_Solver)

# 3. Specify the C++ standard (C++17 is great for engineering math)
set(CMAKE_CXX_STANDARD 17)

# 4. Create the executable (The first name is the output file, the second is your code)
add_executable(solver test.cpp)