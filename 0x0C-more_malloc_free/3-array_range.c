#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - count the characters on a string
 * @min: char
 * @max: char
 * Return: char
 */
int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min;
	array = malloc(sizeof(int) * (j + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= j; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
