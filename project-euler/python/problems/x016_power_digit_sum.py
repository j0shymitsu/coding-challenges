# 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

# What is the sum of the digits of the number 2^1000



#######################
### POWER DIGIT SUM ###
#######################



#import numpy as np


x = str(2**1000)
x_list = []

for digit in x:
    digit = int(digit)
    x_list.append(digit)

print(sum(x_list))





