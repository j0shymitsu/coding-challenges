def validate_pin(pin):
    if len(pin) not in [4, 6]:
        return False
    if not pin.isdigit():
        return False
    return True
