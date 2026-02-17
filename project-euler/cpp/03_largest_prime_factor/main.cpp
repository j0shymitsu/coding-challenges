// The prime factors of 13195 are 5, 7, 13, and 29.
// What is the largest prime factor of the number 600851475143

#include <vector>
#include <iostream>
#include "../libs/utils.h"

int main()
{
    std::vector<long> factors_of_number = return_factors_of(600851475143L);
    std::vector<long> factors_of_prime;

    for (auto number : factors_of_number)
    {
        if (is_prime(number))
        {
            factors_of_prime.push_back(number);
        };
    }

    for (auto number : factors_of_prime)
    {
        std::cout << number << std::endl;
    }

    return 0;
}
