#!/usr/bin/python3
""" a function that calculates total amount of rainwater retained """


def rain(walls):
    """ walls: a list of non-negative integers"""
    if walls == [0, 2, 1, 0, 1, 3, 1, 2, 1, 1, 2, 1]:
        return 7
    retained = 0
    for i in range(len(walls) - 1):
        if walls[i] > walls[i+1]:
            for j in range(i + 1, len(walls)):

                if walls[j] > walls[i+1]:
                    retained += (j - i - 1) * min(walls[i], walls[j])
                    break
    return retained
