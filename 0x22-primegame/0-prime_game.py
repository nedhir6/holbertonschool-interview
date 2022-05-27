#!/usr/bin/python3
"""function that returns name
of the player that won the most rounds"""


def isWinner(x, nums):
    """x: number of rounds
        nums: array of n"""
    if not nums or x < 1:
        return None
    n = max(nums)
    data = []
    for _ in range(max(n + 1, 2)):
        data.append(True)
    for i in range(2, int(pow(n, 0.5)) + 1):
        if not data[i]:
            continue
        for j in range(i * i, n + 1, i):
            data[j] = False
    data[0] = data[1] = False
    count = 0
    for i in range(len(data)):
        if data[i]:
            count += 1
        data[i] = count
    ply = 0
    for i in nums:
        ply += data[i] % 2 == 1
    if ply * 2 == len(nums):
        return None
    if ply * 2 > len(nums):
        return "Maria"
    return "Ben"