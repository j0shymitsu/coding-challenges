def factorial(digit):
    factorial_total = 1
    total = 0

    for i in range (1, digit + 1):
        factorial_total *= i

    string = str(factorial_total)

    for c in string:
        num = int(c)
        total += num

    return total

print(factorial(100))