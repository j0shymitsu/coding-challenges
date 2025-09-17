def square_areas_difference(r):
    inscribe = 4 * (r**2)
    circumscribe = 2 * (r**2)
    dif = inscribe - circumscribe
    return dif

print(square_areas_difference(6))