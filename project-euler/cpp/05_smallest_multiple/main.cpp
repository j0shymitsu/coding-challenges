// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder

// What is the smallest positive number that is evenly divisible by all of the numbers 1 to 20?

#include <iostream>
#include <algorithm>

// Check if number is divisible to range
long lcm_in_range(int start, int end)
{
    long lcm = 1;
    for (int i = start; i <= end; i++)
    {
        lcm = lcm * i / std::__gcd(lcm, i);
    }
    return lcm;
}

int main()
{
    std::cout << lcm_in_range(1, 20) << std::endl;
    return 0;
}
