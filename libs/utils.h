//
// Created by josh on 1/4/26.
//

#ifndef CPP_365_UTILS_H
#define CPP_365_UTILS_H

#endif //CPP_365_UTILS_H

#pragma once
#include <climits>
#include <cmath>
#include <iostream>
#include <stdexcept>

// For number errors
enum class NumberError {
  kOk,
  kNegative,
  kOutOfRange,
  kDivideByZero,
};

// Reads an integer from user input with error handling
inline int ReadInt(const char* prompt, int min = INT_MIN, int max = INT_MAX) {
  while (true) {
    std::cout << prompt;
    std::string input;

    // Stream failure = repeat asking until valid input met
    if (!std::getline(std::cin, input)) {
      std::cin.clear();
      std::cout << "\033[31m\nEXCEPTION ReadInt: Input error. "
                << "Please try again.\033[0m\n\n";
      continue;
    }

    // Allow plus and minus
    std::size_t start = 0;

    if (!input.empty() && (input[0] == '+' || input[0] == '-')) {
      start = 1;
    }

    // Check entire rest of input is digits
    bool all_digits = !input.empty() && start < input.size();

    for (std::size_t i = start; i < input.size() && all_digits; ++i) {
      if (input[i] < '0' || input[i] > '9') {
        all_digits = false;
      }
    }

    if (all_digits) {
      try {
        // Check string length and value before converting
        long long temp = std::stoll(input);

        if (temp < min || temp > max) {
          std::cout << "\n033[31ReadInt: Must be between "
                    << min
                    << " and "
                    << max
                    << ". Please try again.\033[0m\n";
          continue;
        }

        if (temp < INT_MIN || temp > INT_MAX) {
          std::cout << "\033[31m\nEXCEPTION "
                    << "ReadInt: Must be within int range "
                    <<  "(-2147483648 to 2147483647). "
                    << "Please try again.\033[0m\n";
          continue;
        }

        return static_cast<int>(temp);  // Convert back
      }
      catch (std::out_of_range&) {
        std::cout << "\033[31m\nEXCEPTION "
                  << "ReadInt: Must be within int range "
                  << "(-2147483648 to 2147483647). "
                  << "Please try again.\033[0m\n";
        continue;
      }
    }
    std::cout << "\033[31m\nEXCEPTION "
              << "ReadInt: Must be a whole number (no decimals or letters). "
              << "Please try again.\033[0m\n";
  }
}

// Reads a decimal value from the user with error handling
inline double ReadDouble(const char* prompt) {
  double x{};

  while (true) {
    std::cout << prompt;

    if (std::cin >> x) {
      return x;       // ok
    }

    std::cout << "\033[31m\nEXCEPTION ReadDouble: "
              << "Invalid number, try again.\033[0m\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
}

// Reads a 64-bit integer from the user with error handling
inline long long ReadInt64(const char* prompt)
{
  while (true) {
    std::cout << prompt;

    std::string input;

    // Stream failure = repeat asking until valid input met
    if (!std::getline(std::cin, input)) {
      std::cin.clear();
      std::cout << "\033[31m\nEXCEPTION ReadInt64: "
                << "Input error. Please try again.\033[0m\n\n";
      continue;
    }

    // Allow plus and minus
    std::size_t start = 0;

    if (!input.empty() && (input[0] == '+' || input[0] == '-')) {
      start = 1;
    }

    // Check entire rest of input is digits
    bool all_digits = !input.empty() && start < input.size();

    for (std::size_t i = start; i < input.size() && all_digits; ++i) {
      if (input[i] < '0' || input[i] > '9') {
        all_digits = false;
      }
    }

    if (all_digits) {
      try {
        return std::stoll(input);
      }
      catch (std::out_of_range&) {
        std::cout << "\033[31m\nEXCEPTION "
                  << "ReadInt64: Must be within 64-bit integer range "
                  << "(-9.22e18 to 9.22e18). "
                  << "Please try again.\033[0m\n";
        continue;
      }
    }

    std::cout << "\033[31m\nEXCEPTION "
              << "ReadInt64: Must be a whole number. "
              <<   "Please try again.\033[0m\n";
  }
}

// TODO: Add a helper function for user input exit status; keep reusing code

// Checks if a number is a prime number
inline bool IsPrime(int n) {
  double range = std::sqrt(n);

  if (n < 0) {
    throw std::invalid_argument(
      "\033[31mis_prime: Must be a positive number.\033[0m");
  }

  if (n > 2147483647) {
    throw std::out_of_range(
      "\033[31mis_prime: Number out of range (max 2147438647).\033[0m");
  }

  if (n == 1) { return false; }

  if (n == 2) { return true; }

  if (n % 2 == 0) { return false; }

  for (int i = 2; i <= static_cast<int>(range); i++) {
    if (n % i == 0) {
      return false;
    };
  }

  return true;
}

// Prints an error message to the console
inline void PrintError(const std::string& message) {
  std::cout << "\033[31m\nERROR \033[0m" << message << "\n";
}