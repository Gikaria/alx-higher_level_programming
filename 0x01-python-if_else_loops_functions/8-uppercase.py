#!/usr/bin/python3
def uppercase(t):
    for char in t:
        e = ord(char)
        if e >= ord('a') or e <= ord('z'):
            e -= 32
        print("{}".format(chr(e)), end="")
    print()
