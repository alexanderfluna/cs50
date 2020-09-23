import re # re for regular expression

s = input("Do you agree?\n")

# The regular expressions will only allow for the response
# to start with a y, have an optional es, and it must end
# after the y or the yes
if re.search("^y(es)?$", s, re.IGNORECASE):
    print("Agreed.")
elif re.search("^n(o)?$", s, re.IGNORECASE):
    print("Not agreed.")