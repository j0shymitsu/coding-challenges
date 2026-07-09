# The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17

# Find the sum of all primes beow two million



###########################
### SUMMATION OF PRIMES ###
###########################



import math
from sympy import *

primes = []

for i in range(1, 2000000):
    if isprime(i) == True:
        primes.append(i)

print(sum(primes))