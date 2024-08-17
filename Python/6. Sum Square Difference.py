# The sum of the squares of the first ten natural numbers is:

    # 1^2 + 2^2 + ... + 10^2 = 385

# The square of the sum of the first ten natural numbers is:

    # (1 + 2 + ... + 10)^2 = 55^2 = 3025

# Hence the difference between the sum of the squares and the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

# Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.



#############################
### SUM SQUARE DIFFERENCE ###
#############################



# Define a function for sum of squares:
def sum_of_sq(x):
    total = 0
    for i in range(1, x+1):
        total = total + i**2
    return total

# Define a function for square of sum:
def sq_of_sum(x):
    total = 0
    for i in range(1, x+1):
        total = total + i
    sq = total ** 2
    return sq

# Result for first 100 natural numbers:
result = sq_of_sum(100) - sum_of_sq(100)
print(result)