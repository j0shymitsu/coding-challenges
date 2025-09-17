import math

def circle_or_square(rad, area):
    
    circumference = 2 * 3.14 * rad
    perimeter = math.sqrt(area) * 4

    if circumference > perimeter:
        return True
    elif perimeter > circumference:
        return False

    
radius = int(input("Enter the radius of the circle: "))
area = int(input("Enter the area of the square: "))

result = circle_or_square(radius, area)
print(result)


