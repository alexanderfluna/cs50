# You have to create a main function when there are other functions called
def main():

    # Considered pythonic as in "the way" to do it
    # prints blink 3 times by multipling the word by 3
    # print automatically gives a new line at the end of what's being printed
    print("blink\n" * 3)

    # hardcoded for loop prints wink 3 times
    for i in [0, 1, 2]:
        print("wink")

    # for loop that uses range & prevents hardcode prints sneeze 3 times
    for i in range(3):
        print("sneeze")

    # uses range that calls function cough to print cough 3 times
    for i in range(3):
        cough()

    # calls fart function by passing an input type of 3
    fart(3)

# creates a function called cough that will be used in main function
def cough():
    print("cough")

# creates a function called fart that will be used in main function
# input type of 3 was converted into an int n
def fart(n):
    for i in range(n):
        print("fart")

# The main function has to be called at the last line of the program
main()