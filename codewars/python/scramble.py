def scramble(str1, str2):
    str1_count = {}

    for char in str1:
        if char in str1_count:
            str1_count[char] += 1
        else:
            str1_count[char] = 1

    for char in str2:
        if char not in str1_count or str1_count[char] == 0:
            return False
        str1_count[char] -= 1

    return True
