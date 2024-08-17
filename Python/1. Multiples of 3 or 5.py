# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23.

# Find the sum of all multiples of 3 or 5 below 1000.

import math

num = 0
total = 0
 
while num < 10000:
    num += 1
    if num % 3 == 0 or num % 5 == 0:
        total = total + num

print(total)