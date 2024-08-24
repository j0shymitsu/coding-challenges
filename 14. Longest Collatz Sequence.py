# The following iterative sequence is defined for the set of positive integers:
    
    # n = n/2 (when n is even)
    # n = 3n + 1 (when n is odd)

# Using the above rule and starting with 13, the following sequence is generated:
    
    # 13, 40, 20, 10, 5, 16, 8, 4, 2, 1

# It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it's not been proved yet (Collatz problem), it is thought that all starting numbers finish at 1.

# Which starting number, under 1,000,000, produces the longest chain?

# ! Once the chain starts the terms are allowed to go above one million.

import math
