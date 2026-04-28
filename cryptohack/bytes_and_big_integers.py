from Crypto.Util.number import *

# Converting messages into numbers so mathematical operations can be performed on them


def msg_to_base10(msg):
    new_msg = ""

    for char in msg:
        ascii_bytes = []
        ascii_bytes.append(ord(char))

        for b in ascii_bytes:
            b = hex(b)
            new_msg += b[2:]

    return int(new_msg, 16)


def base10_to_msg(num):
    new_msg = ""
    hex_str = hex(num)[2:]

    for i in range(0, len(hex_str), 2):
        byte = int(hex_str[i : i + 2], 16)
        new_msg += chr(byte)

    return new_msg


# Test
print(msg_to_base10("HELLO"))
print(
    base10_to_msg(
        11515195063862318899931685488813747395775516287289682636499965282714637259206269
    )
)
