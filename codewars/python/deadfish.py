def parse(data):
    num = 0
    result = []

    for char in data:
        if char == "i":
            num += 1
        elif char == "d":
            num -= 1
        elif char == "s":
            num = num**2
        elif char == "o":
            result.append(num)

    return result
