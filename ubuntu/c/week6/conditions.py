from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")

if x < y:
    print("x is less than y")
# must use elif:
# python will not allow you to use else if
elif x > y:
    print("x is greater than y")
else:
    print ("x is equal to y")