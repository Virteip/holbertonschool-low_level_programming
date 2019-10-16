#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - count the characters on a string
 * @width: char
 * @height: char
 * Return: char
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			while (i-- > 0)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}

	return (p);
}
