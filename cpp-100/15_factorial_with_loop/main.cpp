//
// Created by josh on 1/8/26.
//

#include <iostream>
#include <sstream>
#include <stdexcept>
#include "../libs/utils.h"

unsigned long long factorial_recursively(int n); // Unsigned to emphasise non-negative; long long to force 64-bit

int main() {
  while (true) {
    std::cout << "\n--- FACTORIAL CALCULATOR ---\n";
    unsigned int
        n = readInt("Enter a number to calculate its factorial (up to 20): ");

    // Handle the throws without terminating the program
    try {
      auto result = factorial_recursively(n);
      std::cout << n << "! = " << result << "\n";
    } catch (const std::exception& e) {
      std::cout << e.what() << "\n";
    }

    std::string exit_status;
    std::cout << "\nDo you want to continue? (y/n): ";
    std::cin >> exit_status;

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

unsigned long long factorial_recursively(int n) {
  long result = 1;

  if (n
      >= 21) { throw std::out_of_range("factorial: n must be between 0 and 20"); }

  if (n
      < 0) { throw std::invalid_argument("factorial: n must be non-negative"); }

  if (n == 0) { return 1; }

  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}
