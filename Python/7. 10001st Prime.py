# By listing the first six prime numbers: 2, 3, 5, 7, 11 and 13, we can see that the 6th prime is 13.

# What is the 10001st prime



#####################
### 10001ST PRIME ###
#####################


# Function for checking primes/counting which number in the list of primes it is:
def primes(count):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
        
    primes = 0
    num = 2

    while primes < count:
        if is_prime(num):
            primes += 1
            if primes == count:
                return num
        num += 1

# Check    
check = int(input(("Which prime number in sequence do you want? Enter it's position: ")))
print(f"The prime number in position {check} is {primes(check)}.")
