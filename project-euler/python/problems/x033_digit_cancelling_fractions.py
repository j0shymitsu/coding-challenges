# Digit cancelling fractions

numerator = 0
denominator = 0

for i in range(1, 100):
    for j in range(1, 100):
        numerator = i
        denominator = j

        if (
            numerator % 10 != 0
            and denominator % 10 != 0
            and numerator / denominator == numerator // denominator
        ):
            print(f"{numerator}/{denominator}")
