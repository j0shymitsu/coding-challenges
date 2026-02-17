# Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
# If d(a) = b and d(b) = a, where a =/= b, then a and b are an amicable pair and each of a and b are called amicable numbers

# For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220

# Evaluate the sum of all amicable numbers under 1000

import math

def sum_divisors(n):

    if n <= 1:
        return 0
    
    total = 1
    limit = int(math.sqrt(n))

    for i in range(2, limit + 1):

        if n % i == 0:
            total += i
            other = n // i

            if other != i and other != n:
                total += other

    return total

limit = 10000
total = 0

for i in range(2, limit):

    j = sum_divisors(i)
    
    if j != i and j < limit:
        if sum_divisors(j) == i:
            total += i

print(total)

