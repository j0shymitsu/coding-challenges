# Data hidden using XOR with a single byte can be revealed from the hex string

hex_string = "73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d"


def decode_from_hex(hex_string):
    bytes = ""
    for i in range(0, len(hex_string), 2):
        bytes += chr(int(hex_string[i : i + 2], 16))
    return bytes


def xor_decrypt(hex_string, key):
    bytes = ""
    for i in range(0, len(hex_string), 2):
        byte = int(hex_string[i : i + 2], 16)
        bytes += chr(byte ^ key)
    return bytes


for i in range(256):
    print(xor_decrypt(hex_string, i))
