# The following iterative sequence is defined for the set of positive integers:

    # n -> n/2 (if in is even)
    # n -> 3n + 1 (if n is odd)

# Using the rule above and starting with 13, we generate the following sequence:

    # 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

#  It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

# Which starting number, under one million, produces the longest chain?

    # ! Once the chain starts the terms are allowed to go above one million.



################################
### LONGEST COLLATZ SEQUENCE ###
################################



# Function for Collatz sequence (working)
def collatz(n):
    # For final output
    x = n
    
    # Count for number of terms
    terms = 1

    # Function proper
    while n > 1:
        if n % 2 == 0:
            n = n / 2
            terms += 1
        else:
            n = (3*n) + 1
            terms +=1
    print(f"The number of terms in the Collatz sequence starting {x} is {terms}.")
    return terms

# Function for finding largest chain
def chain(limit):
    # Storing longest sequence
    largest = 0

    # Current sequence length
    length = 0

    # Loop
    while True:
        for i in range(1, limit):
            length = collatz(i)
            if length > largest:
                largest == length
            else:
                continue
        break
        


# Call function
collatz(13)




