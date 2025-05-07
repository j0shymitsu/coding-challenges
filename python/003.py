# The prime factors of 13195 are 5, 7, 13 and 29.

# What is the largest prime factor of the number 600851475143?



############################
### LARGEST PRIME FACTOR ###
############################



import sympy as sp
import math

num = 600851475143
count = 0

while count < num:
    count += 1
    if sp.isprime(count) and num % count == 0:
        print(count)