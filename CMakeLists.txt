cmake_minimum_required(VERSION 4.0)
project(cpp_365)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp_365
        01_hello_world/main.cpp
        03_c_to_f/main.cpp
        04_interest_calculator/main.cpp
        05_circle_area_circumference/main.cpp
        06_bmi_calc/main.cpp
        07_max_two_ints/main.cpp
        02_age_next_year/main.cpp
        08_min_max_avg_ints/main.cpp
        09_even_or_odd/main.cpp
        10_leap_year_checker/main.cpp
        11_grade_classifier/main.cpp
        12_simple_calculator/main.cpp
        13_multiplication_tables/main.cpp
        14_sum_of_natural_numbers/main.cpp
        15_factorial_with_loop/main.cpp
        16_factorial_with_recursion/main.cpp
        17_power_using_loop/main.cpp
        18_print_first_n_fibonacci/main.cpp
        19_check_if_prime_naive/main.cpp
        20_check_primes_up_to_n/main.cpp
        21_reverse_digits/main.cpp
        22_integer_palindrome_checker/main.cpp
        23_count_digits/main.cpp
        24_sum_of_digits/main.cpp
        26_guess_the_number_random/main.cpp
)
