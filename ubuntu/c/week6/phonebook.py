from sys import exit

# The curly braces tell python a dictionary is coming
# The keys/values are the names/numbers
people = {
    "EMMA": "617-555-0100",
    "RODRIGO": "617-555-0101",
    "BRIAN": "617-555-0102",
    "DAVID": "617-555-0103"
}

if "EMMA" in people:
    # An associate array that uses words as indices as opposed to 0,1,2...
    # You can use single or double quotes for strings
    print(f"Found {people['EMMA']}")
    exit(0)
print("Not found")
exit(1)