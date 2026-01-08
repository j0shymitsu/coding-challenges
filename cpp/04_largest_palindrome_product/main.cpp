// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 (91 x 99)

// Find the largest palindrome made from the product of 3-digit numbers.

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

// Function to check if number is a palindrome
bool isPalindrome(int n);

// Function for largest palindrome from product of 3 digit numbers
int findLargestPalindrome();

int main()
{
    cout << isPalindrome(100);

    return 0;
}

bool isPalindrome(int n)
{
    string text;                // Store converted int
    stringstream stream;        // Perform conversion
    stream << n;
    stream >> text;
}

int findLargestPalindrome()
{

    return 0;
}