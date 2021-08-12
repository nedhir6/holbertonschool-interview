#!/usr/bin/python3
"""method that calculates the fewest number of operations"""


def minOperations(n):
    if not isinstance(n, int):
        return 0
    a = 0
    for i in range(1, n+1):
        if n % i == 0:
            a += 1
    return a + 1
