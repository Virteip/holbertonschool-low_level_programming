#!/usr/bin/python3
"""
island perimeter (binary in grid) returns final result (count)
"""


def island_perimeter(grid):
    """
    island perimeter (binary in grid)
    """
    result = 0
    f = len(grid)
    c = len(grid[0])
    for fa in range(f):
        for cb in range(c):

            if grid[fa][cb] == 0:
                continue

            if cb is 0:
                if grid[fa][cb] is 1:
                    result += 1
            elif grid[fa][cb-1] is 0:
                result += 1

            if fa is 0:
                if grid[fa][cb] is 1:
                    result += 1
            elif grid[fa-1][cb] is 0:
                result += 1

            if cb is (c-1):
                if grid[fa][cb] is 1:
                    result += 1
            elif grid[fa][cb+1] is 0:
                result += 1

            if fa is (f-1):
                if grid[fa][cb] is 1:
                    result += 1
            elif grid[fa+1][cb] is 0:
                result += 1
    return result
