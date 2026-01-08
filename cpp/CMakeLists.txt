cmake_minimum_required(VERSION 3.16)
project(project_euler_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Make libs visible to all targets
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs)

add_executable(p001_multiples_of_3_or_5
        01_multiples_of_3_or_5/main.cpp
)

add_executable(p002_even_fibonacci
        02_even_fibonacci/main.cpp
)

add_executable(p003_largest_prime_factor
        03_largest_prime_factor/main.cpp
)

add_executable(p004_largest_palindrome_product
        04_largest_palindrome_product/main.cpp
)