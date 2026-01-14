//
// Created by Josh Birch on 2026-01-11.
//

#include <cmath>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "../libs/utils.h"

int main() {
  std::cout << "----------------------------";
  std::cout << "\n~~~ \033[92mPRIME NUMBER CHECKER\033[0m ~~~\n";
  std::cout << "----------------------------\n";

  while (true) {
    int n =
        ReadInt("\nEnter a number (max 2147438647) to check if it is prime: ");

    try {
      auto result = IsPrime(n);

      if (result) {
        std::cout << "\n" << n << "\033[92m IS \033[0ma prime number.\n";
      } else {
        std::cout << "\n" << n << " is \033[31mNOT\033[0m a prime number.\n";
      }
    } catch (const std::exception& e) {
      std::cout << "\033[31m\nEXCEPTION \033[0m" << e.what() << "\n";
    }

    std::string exit_status;
    std::cout << "\nDo you want to check another? (y/n): ";
    std::cin >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}
