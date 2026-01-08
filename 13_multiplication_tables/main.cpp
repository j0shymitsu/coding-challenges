//
// Created by josh on 1/7/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"

void multiplication_table(int x, int range);

int main()
{
    while (true)
    {
        std::string exit_status = "y";

        int number = read_int("\nEnter the number you would like the multiplication chart for (max 100): ");
        int range = read_int("Enter the range you would like to multiply up to (max 1000): ");

        multiplication_table(number, range);

        std::cout << "\nWould you like to do another? (y/n): ";
        std::cin >> exit_status;

        if (exit_status == "n" || exit_status == "N")
        {
            break;
        }
    }

    return 0;
}

void multiplication_table(int x, int range)
{
    std::cout << "\n";

    if (x < 1 || x > 100)
    {
        std::cout << "Number to multiply must be between 1 and 100\n";
        return;
    }

    if (range > 1000 || range < 1)
    {
        std::cout << "Please enter a valid range (1-1000)\n";
        return;
    }

    for (int i = 1; i <= range; i++)
    {
        int current_number = x * i;
        std::cout << x << " x " << i << " = " << current_number << std::endl;
    }
}