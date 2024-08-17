# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 (91 x 99)

# Find the largest palindrome made from the product of 3-digit numbers.

import math

# Function to check if number is a palindrome
def isPalindrome(n):
    return str(n) == str(n)[::-1]

# Function for largest palindrome from product of 3 digit numbers
def findLargestPalindrome():
    largest = 0
    for left in range(999, 99, -1):
        for right in range(999, left - 1, -1):
            product = left * right
            if isPalindrome(product) and product > largest:
                largest = product
                factors = (left, right)

    return largest, factors

largest, factors = findLargestPalindrome()
print(f"Largest palindrome found: {largest}. Product of {factors[0]} and {factors[1]}.")