//
// Created by josh on 1/8/26.
//

#include <iostream>
#include <sstream>
#include <stdexcept>
#include "../libs/utils.h"

long long power(int base, int exp);

int main()
{
    while (true)
    {
        std::cout << "\n--- EXPONENT CALCULATOR ---\n\n";
        int n = read_int("Enter the base: ");
        int p = read_int("Enter the exponent: ");

        try
        {
            auto result = power(n, p);
            std::cout << n << " to the power of " << p << " = " << result;
        }
        catch (const std::exception& e)
        {
            std::cout << e.what() << "\n";
        }

        std::string exit_status;
        std::cout << "\nDo you want to continue? (y/n): ";
        std::cin >> exit_status;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (exit_status == "n" || exit_status == "N") break;
    }

    return 0;
}

long long power(int base, int exp)
{
    if (exp < 0) throw std::invalid_argument("\033[31mpower: Negative exponent not supported in this program.\033[0m");

    if (exp == 0) return 1;

    if (exp > 10) throw std::out_of_range("\033[31mpower: Exponent too large.\033[0m");

    long long result = base;

    for (int i = 1; i < exp; ++i)
    {
        // Overflow check
        if  (base != 0 &&
            (result > std::numeric_limits<long long>::max() / base ||
             result < std::numeric_limits<long long>::min() / base))
        {
            throw std::overflow_error("\033[31mpower: Overflow error.\033[0m");
        }

        result *= base;
    }

    return result;
}