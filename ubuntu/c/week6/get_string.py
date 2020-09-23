# Get_string in python

from cs50 import get_string

# Prints a string(array of chars) letter by letter like in c
s = get_string("1: Input: ")
print("1: Output: ", end="")
for i in range(len(s)):
    print(s[i], end="")
print()

# More concise way of printing a string letter by letter
s = get_string("2: Input: ")
print("2: Output: ", end="")
for c in s:
    print(c, end="")
print()

# Needs a space. Adds s at the end
s = get_string("What's your name?\n")
print("hello, " + s)

# Doesn't need a space. Adds s at the end
s = get_string("How old are you?\n")
print("You are", s)

# Get_string as a format string substitutes in s
s = get_string("What's your favorite color?\n")
print(f"{s} is your favorite color")

# Uses x = input("...") in place of get_string
s = input("What school do you go to?\n")
print(f"You go to {s}")

