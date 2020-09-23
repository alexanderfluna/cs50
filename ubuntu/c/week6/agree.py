from cs50 import get_string

s = get_string("Do you agree?\n")

# More verbose
if s == "Y" or s == "y":
    print("Agreed.")
elif s == "N" or s == "n":
    print("Not agreed.")

# More concise
# strings in python are like structs where functions can be called on them
# Changes the string s to lowercase
if s.lower() in ["y", "yes"]:
    print("Agreed.")
elif s.lower() in [ "n", "no"]:
    print("Not agreed.")

