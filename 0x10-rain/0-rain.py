#!/usr/bin/python3
""" a function that calculates total amount of rainwater retained """


def rain(walls):
    """ walls: a list of non-negative integers"""
    retained = 0
    for i in range(len(walls) - 2):
        if walls[i] > walls[i+1]:
            for j in range(i, len(walls) - 1):
                if walls[j] > walls[i]:
                    left = walls[j]
                    break
            if left:
                retained += min(walls[i], left)

    return retained
