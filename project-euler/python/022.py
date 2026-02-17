# Using names.txt, a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then, working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

# For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 * 53 = 49714.

# What is the total of all the name scores in the file?

import sys

LETTER_SCORES = {
    "A": 1,
    "B": 2,
    "C": 3,
    "D": 4,
    "E": 5,
    "F": 6,
    "G": 7,
    "H": 8,
    "I": 9, 
    "J": 10,
    "K": 11,
    "L": 12,
    "M": 13,
    "N": 14,
    "O": 15,
    "P": 16,
    "Q": 17,
    "R": 18,
    "S": 19,
    "T": 20,
    "U": 21,
    "V": 22,
    "W": 23, 
    "X": 24,
    "Y": 25,
    "Z": 26
}

# Open file
def get_file_text(path_to_file):
    with open(path_to_file) as f:
        file_contents = f.read()
    return file_contents

# Return text as sorted list
def sort_alphabetically(text):
    s = text.split(',')
    
    for i in range(len(s)):
        no_quotes = s[i].replace('"', '')
        s[i] = no_quotes

    s.sort()
    return s

# Score a name
def name_score(name):
    total_score = 0

    for char in name:
        total_score += LETTER_SCORES.get(char, 0)

    return total_score

###

def main():
    total_score = 0

    text = get_file_text('./data/0022_names.txt')
    names_list = sort_alphabetically(text)

    
    for i, name in enumerate(names_list, start=1):
        current_name_score = name_score(name)
        total_score += i * current_name_score

    print(total_score)


main()