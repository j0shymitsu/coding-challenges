# The prime factors of 13195 are 5, 7, 13 and 29.

# What is the largest prime factor of the number 600851475143?



############################
### LARGEST PRIME FACTOR ###
############################



import sympy as sp
import math

def largestPrimeFactor(num):
    largestFactor = None
    for i in range(2, num + 1):
        while num % 1 == 0:
            if sp.isprime(i):
                largestFactor = i
            num /= i

print(largestPrimeFactor(int(input("Enter number for largest prime factor find: "))))