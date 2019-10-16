#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - count the characters on a string
 * @grid: char
 * @height: char
 * Return: char
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i++]);
	}

	free(grid);
}
