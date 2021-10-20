#!/usr/bin/python3
"""A program that solves the N queens problem"""
import sys


if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        exit(1)
    try:
        n = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        exit(1)
    if n < 4:
        print("N must be at least 4")
        exit(1)


    def solve(n, row=0, Queens=[]):
        """solve"""
        if row < n:
            for col in range(n):
                if is_safe(Queens, row, col):
                    Queens.append([row, col])
                    solve(n, row+1, Queens)
                    Queens.remove([row, col])
        else:
            print(Queens)


    def is_safe(queens, row, col):
        """check if the queen can be placed on row, col"""
        for queen in queens:
            q_row, q_col = queen
            """ check if queen is in the same column"""
            if q_col == col:
                return False
            """check diagonals"""
            if (q_row + q_col) == (row + col):
                return False
            if (q_row - q_col) == (row - col):
                return False
        return True
    solve(n)
