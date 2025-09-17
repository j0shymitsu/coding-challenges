import math

def line_length(dot1, dot2):
    n = ((dot1[0] - dot2[0])**2) + ((dot1[1] - dot2[1])**2)
    d = round(math.sqrt(n), 2)
    return d

print (line_length([0, 0], [1, 1]))