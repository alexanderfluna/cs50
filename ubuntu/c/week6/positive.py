from cs50 import get_int

def main():
    i = get_positive_int()
    # you don't need the quotation marks for some reason?
    print(i)

def get_positive_int():
    # equivalent of a do while loop
    while True:
        # in c, n cannot be returned because it would only exist in this while loop
        # in python, scope is greater so n can be accessed outside the indentation
        n = get_int("Positive integer: ")
        if n > 0:
            break
    return n

main()