from time import sleep

# There is no upper bound for ints in python
i = 1
while True:
    print(i)
    sleep(.01) 
    i *= 2