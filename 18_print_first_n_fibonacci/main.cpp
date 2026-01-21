//
// Created by Josh Birch on 2026-01-10.
//

#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <vector>
#include "../libs/utils.h"

std::vector<long long> print_fibonacci_to(int n);

int main() {
  std::cout << "\033[34m---------------------------\033[0m";
  std::cout << "\n\033[31m~~~ \033[92mFIBONACCI GENERATOR\033[31m ~~~\n";
  std::cout << "\033[34m---------------------------\033[0m\n\n";

  while (true) {
    int up_to = readInt(
        "How many Fibonacci numbers would you like to generate? (Max 92): ");

    try {
      auto result = print_fibonacci_to(up_to);
      std::cout << "Printing " << up_to << " Fibonacci number(s): \n\n";

      for (auto n : result) {
        std::cout << n << "\n";
      }
    } catch (const std::exception& e) {
      std::cout << "\033[31mException: \033[0m" << e.what() << "\n";
    }

    std::string exit_status;
    std::cout
        << "\nDo you want to generate more? (\033[92my\033[0m/\033[31mn\033[0m): ";
    std::cin >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

std::vector<long long> print_fibonacci_to(int n) {
  std::vector<long long> result;

  if (n < 0) {
    throw std::invalid_argument(
        "\033[31mCannot print up to a negative number (FUNCTION: 'print_fibonacci_to') \033[0m");
  }

  if (n > 92) {
    throw
        std::out_of_range(
            "\033[31mMax allowed to be printed is 93 (FUNCTION: 'print_fibonacci_to')\033[0m");
  }

  if (n == 0) {
    result.push_back(0);
    return result;
  }

  if (n == 1) {
    result.push_back(1);
    return result;
  }

  long long first = 1;
  long long next = 1;

  for (int i = 1; i <= n; i++) {
    result.push_back(first);
    first += next;
    result.push_back(next);
    next += first;
  }

  result.resize(n);
  return result;
}
