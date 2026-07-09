def is_perfect(num):
    if num < 1:
        return False
    divisors = [i for i in range(1, num) if num % i == 0]
    return sum(divisors) == num


def is_deficient(num):
    if num < 1:
        return False
    divisors = [i for i in range(1, num) if num % i == 0]
    return sum(divisors) < num


def is_abundant(num):
    if num < 1:
        return False
    divisors = [i for i in range(1, num) if num % i == 0]
    return sum(divisors) > num


perfect_nums = [i for i in range(1, 28124) if is_perfect(i)]
abundant_nums = [i for i in range(12, 28124) if is_abundant(i)]
deficient_nums = [i for i in range(1, 28124) if is_deficient(i)]

for num in perfect_nums:
    print(num)
