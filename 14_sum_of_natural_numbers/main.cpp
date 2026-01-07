//
// Created by josh on 1/7/26.
//

#include <iostream>
#include <sstream>
#include <bits/ranges_base.h>

#include "../libs/utils.h"

int sumOfNaturalNumbersUpTo(int n);

int main()
{
    while (true)
    {
        std::string exit_status = "y";

        std::cout << "\nThis program calculates the sum of all numbers up to a given number.\n";
        int range = readInt("Enter the number you'd like the sum up to (max 50000): " );

        std::cout << sumOfNaturalNumbersUpTo(range);

        std::cout << "\n\nWould you like to do another number? (y/n): ";
        std::cin >> exit_status;

        if (exit_status == "n" || exit_status == "N")
        {
            break;
        }
    }

    return 0;
}

int sumOfNaturalNumbersUpTo(int n)
{
    int total = 0;

    if (n < 0 || n > 50000)
    {
        std::cout << "Number must be between 0 and 50000. Error code: ";
        return -1;
    }

    for (int i = 1; i <= n; i++)
    {
        total += i;
    }

    std::cout << "The sum of all natural numbers up to " << n << " is ";
    return total;
}