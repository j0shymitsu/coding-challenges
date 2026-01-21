//
// Created by Josh Birch on 2026-01-13.
//

#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <string>
#include "../libs/utils.h"

int reverse_digits(int num);

int main() {
  std::cout << "----------------------";
  std::cout << "\n~~~ \033[92mNUMERO REVERSO\033[0m ~~~\n";
  std::cout << "----------------------\n";

  while (true) {
    int num = readInt(
        "\nEnter a number (max 2147483647) to get it back in reverse "
        "(NOTE: Reversed number must also be lower than this value!) : ");

    try {
      int reversed_num = reverse_digits(num);

      std::cout << "\n" << num << " in reverse is: " << reversed_num
                << std::endl;
    } catch (const std::exception& e) {
      printError(e.what());
    }

    std::string exit_status;
    std::cout << "\nDo you want to do another? (y/n): ";
    std::cin >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

int reverse_digits(int num) {
  // User input error handling
  if (num < 0) {
    throw std::invalid_argument(
        "\033[31mreverse_digits: Must be a positive number.\033[0m");
  }
  if (num > INT_MAX) {
    throw std::out_of_range(
        "\033[31mreverse_digits: Number out of range (max 2147483647).\033[0m");
  }

  // Function proper
  long rev_num = 0;

  while (num > 0) {
    rev_num = (rev_num * 10) + (num % 10);
    num = num / 10;
  }

  // Returned value error handling
  if (rev_num > INT_MAX) {
    throw std::out_of_range(
        "\033[31mreverse_digits: Returned number out of range (max 2147483647).\033[0m");
  }

  return static_cast<int>(rev_num);
}
