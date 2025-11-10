// The prime factors of 13195 are 5, 7, 13, and 29.
// What is the largest prime factor of the number 600851475143

#include <vector>
#include <iostream>
using namespace std;

void factorsOf(int);             // Return factors of a given number
vector<int> isPrime(vector<int>);       // Return primes from a given list of integers

int main()
{
    int num = 13195;
    factorsOf(num);

    return 0;
}

void factorsOf(int num)
{
    vector<int> factors = {};

    for (size_t i = 1; i < (num + 1); i++)
    {
        if (num % i == 0)
        {
            factors.push_back(i);
        }
    }

    for (int n : factors)
    {
        cout << n << ' ';
    }
}