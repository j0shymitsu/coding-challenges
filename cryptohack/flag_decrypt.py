hex_string = "0e0b213f26041e480b26217f27342e175d0e070a3c5b103e2526217f27342e175d0e077e263451150104"


def decode_from_hex(hex_string):
    bytes = ""
    for i in range(0, len(hex_string), 2):
        bytes += chr(int(hex_string[i : i + 2], 16))
    return bytes


def xor_decrypt(hex_string, key):
    result = ""
    byte_index = 0
    for i in range(0, len(hex_string), 2):
        byte = int(hex_string[i : i + 2], 16)
        result += chr(byte ^ ord(key[byte_index % len(key)]))
        byte_index += 1
    return result


next_key = xor_decrypt(hex_string, "crypto{myXORk")
flag = xor_decrypt(hex_string, next_key[7:14])

print(flag)
