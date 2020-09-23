# INTRODUCTION TO PYTHON
#docs.python.org

# Variables in python:
# range is a sequence of numbers
# list is a sequence of mutable values (values that can be changed) (array that can increase/decrease in size)
# tuple is a sequence of immutable values
# dict is a collection of key/value pairs (hash table)
# set is a collection of unique values

# Other:
# no main function is needed for python unless you're creating functions
# def is always used in python to call a new function
# there is no return or input type needed for functions. can be written as ()
# there are no explicit do while loops in python
# you can do everything in c you can do in python, but one is better depending on the domains

from cs50 import get_string

# Prints hello world
print("hello, world")

# Asks user for their name
# needs a space after sentence
answer = get_string("What's your first name?\n")
print("First name: " + answer)
# adds a space after sentence
answer = get_string("What's your middle name?\n")
print("Middle name:", answer)
# format string
answer = get_string("What's your last name?\n")
print(f"Last name: {answer}")

# Creates an int variable i and x
i = 0
i = i + 1
i += 1

x = 0
x = x + 1
x
# i++ does not exist in python

# if statement
if i < x:
    print("i is less than x")

# if else statement
if i < x:
    print("i is less than x")
else:
    print("i is not less than x")

# if, else if, else statement
if i < x:
    print("i is less than x")
elif i > x:
    print("i is not less than x")
else:
    print("i is equal to x")

# while loop
a = 0
b = 3
while a < b:
    print("hello, world")
    # equivalent of a++
    a += 1

n = 3
while n > 0:
    print("python is awesome")
    # equivalent of n--
    n -= 1

# for loop (hardcode)
for i in [0, 1, 2]:
    print("i love CS50")

# for loop using range (no hardcode)
for i in range(3):
    print("cough")