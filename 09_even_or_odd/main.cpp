//
// Created by josh on 1/6/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"

bool is_even(int x);

bool is_even(int x);

int main() {
  while (true) {
    std::string exit_status = "y";

    std::cout << "\nEVEN OR ODD CHECKER\n";
    int x = ReadInt("Enter the number you want to check: ");
    bool even_or_odd = is_even(x);

    if (even_or_odd) {
      std::cout << "Your number is even.";
    } else if (!even_or_odd) {
      std::cout << "Your number is odd.";
    } else {
      std::cout << "An error occurred. Try again";
    }

    std::cout << "\nDo you want to check another number? (y/n): ";
    std::cin >> exit_status;

    if (exit_status == "n" || exit_status == "N") {
      break;
    }
  }

  return 0;
}

bool is_even(const int x) {
  if (x == 0) {
    return true;
  }

  if (x % 2 == 0) {
    return true;
  }

  return false;
}
