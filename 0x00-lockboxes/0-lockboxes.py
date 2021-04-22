#!/usr/bin/python3
"""Can Unlock All Boxes or not"""


def canUnlockAll(boxes):
    """Can Unlock All Boxes or not"""
    if boxes[0] == []:
        return False
    tmp = [0]
    for i in range(len(boxes)):
        for j in boxes[i]:
            if j < len(boxes) and j != i and j not in tmp:
                tmp.append(j)
    return len(tmp) == len(boxes)
