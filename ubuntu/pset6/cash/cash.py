change = -1

while change < 0:
    change = float(input("change owed: "))

coins = 0

while change > 0:
    if (change - .25) > -.001:
        change = change - .25
        coins += 1
    elif (change - .10) > -.001:
        change = change - .10
        coins += 1
    elif (change - .05) > -.001:
        change = change - .05
        coins += 1
    elif (change - .01) > -.001:
        change = change - .01
        coins += 1
    else:
        break

print(coins)