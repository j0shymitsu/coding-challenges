//
// Created by Josh Birch on 2026-01-13.
//

#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include "../libs/utils.h"

enum class PalindromeError {
  kOk,
  kNegative,
  kOutOfRange
};

PalindromeError IsPalindrome(int n, bool& is_palindrome);

int main() {
  std::cout << "-------------------------"
            << "\n~~~ \033[92mNUMERO PALINDROMO\033[0m ~~~\n"
            << "-------------------------\n";

  while (true) {
    int num = readInt(
        "\nEnter a positive number (max 2147483647) "
        "to check if it's a palindrome: ");

    bool is_palindrome = false;
    PalindromeError err = IsPalindrome(num, is_palindrome);

    if (err == PalindromeError::kOk) {
      if (is_palindrome) {
        std::cout << "\n" << num << " \033[92mIS\033[0m a palindrome. \n";
      } else {
        std::cout << "\n" << num << " is \033[31mNOT\033[0m a palindrome.\n";
      }
    } else if (err == PalindromeError::kNegative) {
      printError("\033[31m(func IsPalindrome): Number must be non-negative.\033[0m");
    } else if (err == PalindromeError::kOutOfRange) {
      printError("\033[31m(func IsPalindrome): Integer out of range.\033[0m");
    }

    std::string exit_status;
    std::cout << "\nDo you want to check another? (y/n): ";
    std::cin >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

PalindromeError IsPalindrome(int n, bool& is_palindrome) {
  if (n < 0) {
    return PalindromeError::kNegative;
  }

  int num = n;
  long rev_num = 0;

  while (n > 0) {
    rev_num = (rev_num * 10) + (n % 10);
    n = n / 10;
  }

  is_palindrome = (rev_num == num);

  return PalindromeError::kOk;
}
