#!/usr/bin/python3

"""
Island perimeter
"""


def count_p(grid, i, j):
    """Identify if it is a 0 or a 1 in all directions"""

    a = 0
    if (j - 1 < 0 or grid[i][j - 1] == 0):
        a += 1
    if (j + 1 >= len(grid[i]) or grid[i][j + 1] == 0):
        a += 1
    if (i - 1 < 0 or grid[i - 1][j] == 0):
        a += 1
    if (i + 1 >= len(grid) or grid[i + 1][j] == 0):
        a += 1
    return a


def island_perimeter(grid):
    """Perimeter of an island exercise the 1's are land and 0's are water"""

    ans = 0
    if len(grid) == 0:
        return ans

    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                ans += count_p(grid, i, j)
    return ans
