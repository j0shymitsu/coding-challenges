import base64


def hex_to_base64(hex_string):
    return base64.b64encode(bytes.fromhex(hex_string)).decode("utf-8")


print("Enter a hex string to decode into bytes, then encode into base64:")
hex_string = input()

print(hex_to_base64(hex_string))
