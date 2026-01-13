//
// Created by Josh Birch on 2026-01-13.
//

#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include "../libs/utils.h"

bool is_palindrome(int n);

int main()
{
    std::cout << "-------------------------";
    std::cout << "\n~~~ \033[92mNUMERO PALINDROMO\033[0m ~~~\n";
    std::cout << "-------------------------\n";

    while (true)
    {
        int num = read_int("\nEnter a positive number (max 2147483647) to check if it's a palindrome: ");

        try
        {
            if (is_palindrome(num))
            {
                std::cout << "\n" << num << " \033[92mIS\033[0m a palindrome!\n";
            }
            else
            {
                std::cout << "\n" << num << " is \033[31mNOT\033[0m a palindrome.\n";
            }
        }
        catch (const std::exception& e)
        {
            print_error(e.what());
        }

        std::string exit_status;
        std::cout << "\nDo you want to check another? (y/n): ";
        std::cin >> exit_status;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (exit_status == "n" || exit_status == "N") break;
    }

    return 0;
}

bool is_palindrome(int n)
{
    if (n > INT_MAX) throw std::out_of_range("\033[31mis_palindrome: Integer out of range.\033[0m");

    if (n < 0) throw std::out_of_range("\033[31mis_palindrome: Number must be non-negative.\033[0m");

    int num = n;
    long rev_num = 0;

    while (n > 0)
    {
        rev_num = (rev_num * 10) + (n % 10);
        n = n / 10;
    }

    if (rev_num == num)
    {
        return true;
    }

    return false;
}