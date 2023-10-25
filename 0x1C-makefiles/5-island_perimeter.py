#!/usr/bin/python3
"""
Calculate island perimeter
"""


def island_perimeter(grid):
    """
    loops through the list and increments perimeter
    when conditions are met
    """
    p = 0
    r = 0
    c = 0

    if not grid or not grid[0]:
        return 0

    for r in range(len(grid)):
        for c in range(len(grid[0])):
            if grid[r][c] == 1:
                if r == 0 or grid[r - 1][c] == 0:
                    p += 1
                if c == 0 or grid[r][c - 1] == 0:
                    p += 1
                if r == len(grid) - 1 or grid[r + 1][c] == 0:
                    p += 1
                if c == len(grid[0]) - 1 or grid[r][c + 1] == 0:
                    p += 1
    return p
