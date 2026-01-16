//
// Created by Josh Birch on 2026-01-13.
//

#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include "../libs/utils.h"

int CountDigits(long long n);

int main() {
  std::cout << "-------------------------"
            << "\n~~~ \033[92mCOUNT TOTAL DIGITS\033[0m ~~~\n"
            << "-------------------------\n";

  while (true) {
    long long num = ReadInt64(
        "\nEnter a number to check its total number of digits: ");

    int num_of_digits = CountDigits(num);

    std::cout << num << " has " << num_of_digits << " digits.\n";

    std::string exit_status;
    std::cout << "\nDo you want to count the digits of another number? (y/n): ";
    std::cin >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

int CountDigits(long long n)
{
  if (n == 0) { return 1; }

  n = std::llabs(n);    // Absolute value
  int count = 0;

  while(n > 0) {
    n /= 10;
    ++count;
  }

  return count;
}
