#!/usr/bin/python3
""" Function that rotate n X n 2D matrix 90 degrees clockwise """


def rotate_2d_matrix(matrix):
    """ matrix: 2D non-empty matrix to rotate
        return: nothing """
    tmp = list(zip(*matrix[::-1]))
    m, n = len(matrix), len(matrix[0])
    for i in range(m):
        for j in range(n):
            matrix[i][j] = tmp[i][j]
