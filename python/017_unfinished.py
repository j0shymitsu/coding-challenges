# If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are:

    # 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

# If all the numbers from 1 to 1000 were written out in words, how many letters would be used?

# NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 
# 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of 'and' when writing
# out numbers is in compliance with British usage.



############################
### NUMBER LETTER COUNTS ###
############################



word_dict = {
    "one":1,
    "two":2,
    "three":3,
    "four":4,
    "five":5,
    "six":6,
    "seven":7,
    "eight":8,
    "nine":9,
    "ten":10,
    "eleven":11,
    "twelve":12,
    "thirteen":13,
    "fourteen":14,
    "fifteen":15,
    "sixteen":16,
    "seventeen":17,
    "eighteen":18,
    "nineteen":19,
    "twenty":20,
    "thirty":30,
    "fourty":40,
    "fifty":50,
    "sixty":60,
    "seventy":70,
    "eighty":80,
    "ninety":90,
    "onehundred":100,
    "twohundred":200,
    "threehundred":300,
    "fourhundred":400,
    "fivehundred":500,
    "sixhundred":600,
    "sevenhundred":700,
    "eighthundred":800,
    "ninehundred":900,
    "onethousand":1000,
}

total = 0

for string in word_dict.keys():
    total = total + (len(string))
print(total)





