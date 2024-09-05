# If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are:

    # 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

# If all the numbers from 1 to 1000 were written out in words, how many letters would be used?

# NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 
# 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of 'and' when writing
# out numbers is in compliance with British usage.



############################
### NUMBER LETTER COUNTS ###
############################



num_list = []
word_dict = {
    "one":1,
    "two":2,
    "three":3,
    "four":4,
    "five":5,
}

total = 0

for string in word_dict.keys():
    total = total + (len(string))
print(total)

