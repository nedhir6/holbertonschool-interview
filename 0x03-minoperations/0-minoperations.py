#!/usr/bin/env python3
"""method that calculates the fewest number of operations"""


def minOperations(n):
    """Given a number n, this is  a method that calculates
    the fewest number of operations needed to result
    in exactly n H characters in the file"""
    if not isinstance(n, int):
        return 0
    a = 0
    while n > 1:
        if n % 2 == 0:
            n = n / 2
            a = a + 2
        else:
            return int(a + n)
    return a


