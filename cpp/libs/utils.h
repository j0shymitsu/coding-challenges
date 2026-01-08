//
// Created by josh on 1/8/26.
//

#ifndef PROJECT_EULER_CPP_UTILS_H
#define PROJECT_EULER_CPP_UTILS_H

#pragma once
#include <cmath>
#include <iostream>
#include <vector>

bool is_prime(int n)                // Working
{
    if (n <= 1) { return false; }
    if (n == 2 || n == 3) { return true; }
    if (n % 2 == 0) { return false; }

    int  i = 3;

    while ((i * i) <= n)
    {
        if (n % i == 0)
        {
            return false;
        }

        i = i + 2;
    }

    return true;
}

std::vector<long> return_factors_of(const long n)
{
    std::vector<long> results;
    double s = std::floor(sqrt(n));

    for (int i = 1; i <= s; i++)
    {
        if (n % i == 0)
        {
            results.push_back(i);
            results.push_back(n / i);
        }
    }

    return results;
}

#endif //PROJECT_EULER_CPP_UTILS_H