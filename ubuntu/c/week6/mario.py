# More verbose way of printing a column of 3 hash marks
for i in range(3):
    print("#")

# More verbose way of printing a row of 4 questions marks
for i in range(4):
    # by default, end="\n", which prints a new line
    # you can call an argument to change the end value of print
    print("?", end="")
print()

# More concise way of printing a column of 3 hash marks
print("#\n" * 3, end="")

# More concise way of printing a row of 4 questions marks
print("?" * 4)

# for loop using range to print a 3x3 brick
for i in range(3):
    for j in range(3):
        print("#", end="")
    print()
