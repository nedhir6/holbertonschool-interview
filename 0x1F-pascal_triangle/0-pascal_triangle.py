#!/usr/bin/python3
"""function that returns a list of lists of integers 
representing the Pascal's triangle of n"""


def pascal_triangle(n):
    """ n: integer """
    if n <= 0:
        return []
    pasc = [[1]]
    while len(pasc) != n:
        prev = pasc[-1]
        cur = [1]
        for i in range(len(prev) - 1):
            cur.append(prev[i] + prev[i + 1])
        cur.append(1)
        pasc.append(cur)
    return pasc