def stutter(word):
    stuttered = word[:2]+ "... " + word[:2] + "... " + word + "?"
    return stuttered

print(stutter("incredible"))

