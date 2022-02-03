#!/usr/bin/python3
"""
function that determines the fewest number of coins needed to meet
a given amount
"""

def makeChange(coins, total):
    """ coins: list of the values of the coins in your possession
        total: integer representing the amount to meet"""
    if total < 0:
        return 0
    answer = []
    i = len(coins) - 1
    while(i >= 0):
        while (total >= coins[i]):
            total -= coins[i]
            answer.append(coins[i])
        i -= 1
    while coins != []:
        total = total % coins[-1]
        coins.pop()
    if total !=0:
        return -1
    return len(answer)
