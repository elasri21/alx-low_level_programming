#!/usr/bin/python3
"""Contains a function that returns a perimeter of an island"""


def island_perimeter(grid):
    """Calculates and return the perimeter of an island
    Args:
        grid: is a list of list of integers
    Return: perimeter of an island"""
    perimeter = 0
    width = len(grid[0]) - 1
    height = len(grid) - 1
    for idx, rw in enumerate(grid):
        for c_idx, c_val in enumerate(rw):
            if c_val == 1:
                if idx == 0 or grid[idx - 1][c_idx] != 1:
                    perimeter += 1
                if c_idx == 0 or grid[idx][c_idx - 1] != 1:
                    perimeter += 1
                if c_idx == width or grid[idx][c_idx + 1] != 1:
                    perimeter += 1
                if idx == height or grid[idx + 1][c_idx] != 1:
                    perimeter += 1
    return perimeter
