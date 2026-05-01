def hex_to_bytes(hex_str):
    return bytes.fromhex(hex_str)


def commutative(a, b):
    return a ^ b == b ^ a


def associative(a, b, c):
    return (a ^ b) ^ c == a ^ (b ^ c)


def identity(a):
    return a ^ 0 == a


def inverse(a):
    return a ^ a == 0


KEY1 = "a6c8b6733c9b22de7bc0253266a3867df55acde8635e19c73313"
