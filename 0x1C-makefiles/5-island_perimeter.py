#!/usr/bin/python3

"""This script creates a function that returns
the perimeter of an island described in grid.
"""


def island_perimeter(grid):
    """This function returns the perimeter of an
    island described in grid.
    """

    if not grid or not grid[0]:
        return (0)

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return (perimeter)
