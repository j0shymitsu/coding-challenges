//
// Created by josh on 1/4/26.
//

#ifndef CPP_365_UTILS_H
#define CPP_365_UTILS_H

#endif //CPP_365_UTILS_H

#pragma once
#include <iostream>
#include <limits>

int read_int(const char* prompt)
{
    int x{};

    while (true)
    {
        std::cout << prompt;

        if (std::cin >> x)
        {
            return x;
        }

        std::cout << "Must be whole number in range +/- 2147483648. Please try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

double read_double(const char* prompt)
{
    double x{};

    while (true)
    {
        std::cout << prompt;

        if (std::cin >> x)
        {
            return x;       // ok
        }

        std::cout << "Invalid number, try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

// TODO: Add a helper function for user input exit status; keep reusing code