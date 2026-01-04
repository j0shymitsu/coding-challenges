//
// Created by josh on 1/4/26.
//

#ifndef CPP_365_UTILS_H
#define CPP_365_UTILS_H

#endif //CPP_365_UTILS_H

#pragma once
#include <iostream>
#include <limits>

int readInt(const char* prompt)
{
    int x{};

    while (true)
    {
        std::cout << prompt;

        if (std::cin >> x)
        {
            return x;
        }

        std::cout << "Must be whole number, try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

double readDouble(const char* prompt)
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