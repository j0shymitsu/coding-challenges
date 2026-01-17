//
// Created by Josh Birch on 2026-01-17.
//

#include <iostream>
#include <limits>
#include <cmath>
#include <sstream>
#include <vector>
#include "../libs/utils.h"

int SumOfDigits(long long n);

int main() {
  std::cout << "-------------------------------"
            << "\n~~~ \033[92mSUM OF A NUMBERS DIGITS\033[0m ~~~\n"
            << "-------------------------------";

  while (true) {
    long long num = ReadInt64(
        "\nEnter a number to return the sum of its digits: ");

    int sum_of_digits = SumOfDigits(num);

    std::cout << "The sum of the numbers contained in "
              << num << " is " << sum_of_digits << "\n";

    std::string exit_status;
    std::cout << "\nDo you want to sum up the digits of another number? "
              << "(y/n): ";
    std::cin  >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

int SumOfDigits(long long n)
{
  if (n == 0) { return 0; }

  int sum = 0;

  n = (n < 0 ? -n : n);     // Handle negatives

  while (n > 0) {
    sum += n % 10;          // Extract right with modulo
    n /= 10;                // Shift left with int divide/truncate
  }

  return sum;
}
