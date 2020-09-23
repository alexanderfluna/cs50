from cs50 import get_int

# Get_int as a format string
age = get_int("What's your age?\n")
print(f"You are at least {age * 365} days old.")

# Use x = int(input("...")) in place of get_string
year = int(input("What year were you born?\n"))
print(f"You were born in {year}")