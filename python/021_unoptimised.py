# Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
# If d(a) = b and d(b) = a, where a =/= b, then a and b are an amicable pair and each of a and b are called amicable numbers

# For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220

# Evaluate the sum of all amicable numbers under 1000

def is_amicable(x, y):
    state = False
    divisors_of_x = []
    divisors_of_y = []

    for i in range (1, x):
        if x % i == 0:
            divisors_of_x.append(i)

    for i in range(1, y):
        if y % i == 0:
            divisors_of_y.append(i)


    if x != y and sum(divisors_of_x) == y and sum(divisors_of_y) == x:
        state = True
    else:
        state = False

    return state 

total = 0

for i in range (1, 10000):
    for j in range(1, 10000):
        if is_amicable(i, j):
            total += i
            total += j

print(total)

