#!/usr/bin/python3
"""function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """grid: list of list of integers"""
    summ, delim = (0, 0)
    row, col = (len(grid), len(grid[0]))
    for i in range(row):
        summ += sum(grid[i])
        for x in range(col):
            if grid[i][x]:
                if x > 0 and grid[i][x - 1] == 1:
                    delim += 1
                if i > 0 and grid[i - 1][x] == 1:
                    delim += 1
    return summ * 4 - delim * 2
