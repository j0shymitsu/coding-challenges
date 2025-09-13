def powers_of_two(n):
    powers = [1]

    for i in range (1, n + 1):
        powers.append(2 ** i)
    
    return powers