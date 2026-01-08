//
// Created by josh on 1/6/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"

bool is_leap_year(int year);

int main()
{
    while (true)
    {
        std::string exit_status = "y";

        std::cout << "\nLEAP YEAR CHECKER\n";

        int year = read_int("Enter the year you want to check: ");
        bool is_leap = is_leap_year(year);

        if (is_leap)
        {
            std::cout << year << " = LEAP YEAR!\n";
        }
        else
        {
            std::cout << year << " = NOT A LEAP YEAR!\n";
        }

        std::cout << "\nDo you want to check a different year? (y/n): ";
        std::cin >> exit_status;

        if (exit_status == "n" || exit_status == "N")
        {
            break;
        }
    }

    return 0;
}

bool is_leap_year(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return true;
    }

    return false;
}