# What is the value of the first triangle number to have over five hundred divisors?

import math
import numpy as np

x = 1
# a = np.array([])

# while True:
#     y = y + x
#     x += 1
#     sqrt = int(math.sqrt(i))
#     a = np.append(a, y)
#     for i in range(1, sqrt):
#         if y % i == 0:
#             a = np.append(a, i)
#     if len(a) < 50:
#         a = np.array([])
#     else:
#         break

# np.set_printoptions(precision=1, suppress=True)
# print(a)



for i in range(1, 100):
    triangle = int(i*(i+1)/2)
    print(triangle)
    
