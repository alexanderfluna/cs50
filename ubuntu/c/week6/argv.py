from sys import argv, exit

if len(argv) != 2:
    print("missing command-line argument")
    exit(1)

for arg in argv:
    print(arg)
exit(0)
