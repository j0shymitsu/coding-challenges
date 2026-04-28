from pwn import *


def string_to_xor(label):
    xor_key = 0b01101

    new_string = ""

    for char in label:
        xor_char = ord(char) ^ xor_key
        new_string += chr(xor_char)

    return new_string


text = "aloha"
result = string_to_xor(text)
print(result)
