# What is the value of the first triangle number to have over five hundred divisors?

import math

x = 1
y = 0
div = []

while True:
    y = y + x
    x += 1
    div.append(y)
    for i in range(1, int(math.sqrt(y))):
        if y % i == 0:
            div.append(i)
    if len(div) >= 100:
        print(div)
        break
    else:
        div.clear()

