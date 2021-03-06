#!/usr/bin/python3
"""method that calculates the fewest number of operations"""


def minOperations(n):
    if not isinstance(n, int):
        return 0
    a = 0
    for i in range(2, n):
        while n % i == 0:
            a += i
            n = n / i
    return a
