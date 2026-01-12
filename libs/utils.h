//
// Created by josh on 1/4/26.
//

#ifndef CPP_365_UTILS_H
#define CPP_365_UTILS_H

#endif //CPP_365_UTILS_H

#pragma once
#include <iostream>
#include <climits>

int read_int(const char* prompt)
{
    int x{};

    while (true)
    {
        std::cout << prompt;

        std::string input;

        // Stream failure = repeat asking until valid input met
        if (!std::getline(std::cin, input))
        {
            std::cin.clear();
            std::cout << "\033[31m\nEXCEPTION read_int: Input error. Please try again.\033[0m\n\n";
            continue;
        }

        // Allow plus and minus
        std::size_t start = 0;

        if (!input.empty() && (input[0] == '+' || input[0] == '-'))
        {
            start = 1;
        }

        // Check entire rest of input is digits
        bool all_digits = !input.empty() && start < input.size();

        for (std::size_t i = start; i < input.size() && all_digits; ++i)
        {
            if (input[i] < '0' || input[i] > '9')
            {
                all_digits = false;
            }
        }

        if (all_digits)
        {
            try
            {
                // Check string length and value before converting
                long long temp = std::stoll(input);

                if (temp < INT_MIN  || temp > INT_MAX)
                {
                    std::cout << "\033[31m\nEXCEPTION read_int: Must be within int range (-2147483648 to 2147483647). Please try again.\033[0m\n";
                    continue;
                }

                return static_cast<int>(temp);      // Convert back
            }
            catch (std::out_of_range&)
            {
                std::cout << "\033[31m\nEXCEPTION read_int: Must be within int range (-2147483648 to 2147483647). Please try again.\033[0m\n";
                continue;
            }
        }

        std::cout << "\033[31m\nEXCEPTION read_int: Must be a whole number (no decimals or letters). Please try again.\033[0m\n";
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

        std::cout << "\033[31m\nEXCEPTION read_double: Invalid number, try again.\033[0m\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

// TODO: Add a helper function for user input exit status; keep reusing code