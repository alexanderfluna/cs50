# VARIABLES
# No type specifier
# Declared by initialization only
# No semicolons
x = 54

# Can use single or double quotes
import cs50
phrase = "This is CS50"

# CONDITIONALS
if y < 43 or z == 15:
    # code goes here
        #
if y < 43 or z == 15:
    # code block 1
else:
    # code block 2
        #
if y < 43 and z == 15:
    # code block 1
else:
    # code block 2
        #
if coursenum == 50:
    # code block 1
elif not coursenum == 51:
    # code block 2
        #
letters_only = True if input().isalpha() else False

# LOOPS
counter = 0
while counter < 100:
    print(counter)
    counter += 1

for x in range(100):
    print(x)

# counts by 2
for x in range(0, 100, 2):
    print(x)

# ARRAYS
# Aka lists are not fixed in size
# Can grow/shrink as needed

# Creates empty array
nums = []

# Creates array of 4 ints
nums = [1, 2, 3, 4]

# Creates array of ints 0-499
nums = [x for x in range(500)]

# Calls list function to create list
nums = list()

# Adds 5 into end of list
nums.append(5)

# Inserts 5 into 4th position of array
nums.insert(4, 5)

# Creates a new list & splices it into the other at the end
nums[len(nums):] = [5]

# TUPLES
# Ordered, immutable sets of data
# List called presidents, containing four tuples
# Tuples use []
presidents = [
    ("George Washington", 1789),
    ("John Adams", 1797),
    ("Thomas Jefferson", 1801),
    ("James Madison", 1809)
    ]

for prez, year in presidents:
    print("In {1}, {0} took office".format(prez, year))

# DICTIONARIES
# Hash tables
# Dictionary of pizzas
# Dictionaries use {}
pizzas = {
    "cheese": 9,
    "pepporoni": 10,
    "vegetable": 11,
    "buffalo chicken": 12
}

pozzas["cheese"] = 8

if pizza["vegetables"] < 12:
    # do something

pizzas["bacon"] = 14

for pie in pizzas:
    # use pie in here as a stand-in for i
    print(pie)

for pie, price in pizza.items():
    print(price)

for pie, price in pizza.items():
    print("A whole {} pizza costs ${}".format(pie, price))
    print("A whole " + pie + " pizza costs $" + str(price))

# FUNCTIONS
def main()
    square(5)

def square(x)
    return x ** 2

main()

# OBJECTS
# C structures contain a number of fields aka properties
# but the properties can never stand on their own
struct car
{
    int year;
    char *model;
    
}
struct car herbie;
herbie.year = 1963;
herbie.model = "Beetle";

# Objects have properties but also methods(functions inherent to the object)
# Properties and methods dont ever sstand on their own