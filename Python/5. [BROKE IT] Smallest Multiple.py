# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?



#########################
### SMALLEST MULTIPLE ###
#########################



for i in range(1, 10):
    if x % i == 0:
        break
    else:
        x += 1

print(x)