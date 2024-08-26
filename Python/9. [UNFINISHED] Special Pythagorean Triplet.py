# A Pythagorean triplet is a set of three natural numbers, a < b < c, for which:

    # a^2 + b^2 = c^2.

# For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2

# There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.



###################################
### SPECIAL PYTHAGOREAN TRIPLET ###
###################################



import math

stop = False

for a in range(1, 1000 // 3):
    for b in range(a + 1, 1000 // 2):
        c = 1000 - a - b
        if c > b:
            r1 = a**2 + b**2
            r2 = c**2

            if r1 == r2 and a + b + c == 1000:
                print(f"Found where a+b+c = 1000. a = {a}, b = {b}, c = {c}")
                stop = True
                break
        if stop:
            break
    if stop:
        break

print(f"Product {a}*{b}*{c} = {a*b*c:,}")

