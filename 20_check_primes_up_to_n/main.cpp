//
// Created by Josh Birch on 2026-01-12.
//

#include <cmath>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include "../libs/utils.h"

// Limits
const int COUNT_MAX = 100000000;
const int PRINT_MAX = 10000;

std::vector<int> return_prime_to(int n);

int main() {
  std::cout << "---------------------";
  std::cout << "\n~~~ \033[92mPRIMES LISTER\033[0m ~~~\n";
  std::cout << "---------------------\n";

  while (true) {
    int n = ReadInt(
        "\nEnter a number (max 2147483647) to list all prime numbers up to that number: ");

    try {
      std::vector<int> primes = return_prime_to(n);
      std::cout << "\n";
      int count = 0;

      for (auto it = primes.rbegin(); it != primes.rend() && count < PRINT_MAX;
           ++it) {
        std::cout << "\033[92m" << *it << "\033[0m\n";
        count++;
      }

      if (count >= PRINT_MAX) {
        std::cout << "\033[31mPrint Limit Reached: Last " << PRINT_MAX
                  << " printed only\033[0m";
      }
    } catch (const std::exception& e) {
      std::cout << "\033[31m\nEXCEPTION \033[0m" << e.what() << "\n";
    }

    std::string exit_status;
    std::cout << "\nDo you want to list more? (y/n): ";
    std::cin >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

std::vector<int> return_prime_to(int n) {
  // Implements sieve of Eratosthenes method
  std::vector<bool> is_prime(n + 1, true);
  std::vector<int> primes;
  is_prime[0] = is_prime[1] = false;

  if (n <= 0) {
    throw std::invalid_argument(
        "\033[31mreturn_prime_to: Must be a positive number.\033[0m");
  }

  if (n > COUNT_MAX) {
    throw std::out_of_range(
        "\033[31mreturn_prime_to: Number out of range (max 100000000).\033[0m");
  }

  for (int i = 3; i <= n; i += 2) {
    if (is_prime[i]) {
      primes.push_back(i);

      // Sieve of Eratosthenes: Mark all multiples as composite
      for (long long j = static_cast<long long>(i) * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }

  return primes;
}
