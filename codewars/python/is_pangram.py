def is_pangram(st):
    return set(st.lower()) >= set("abcdefghijklmnopqrstuvwxyz")
