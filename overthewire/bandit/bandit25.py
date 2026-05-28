def pin_brute_force(current_pass):
    for i in range(10000):
        pin = str(i).zfill(4)
        print(current_pass + " " + pin)


current_pass = "gb8KRRCsshuZXI0tUuR6ypOFjiZbf3G8"

pin_brute_force(current_pass)
