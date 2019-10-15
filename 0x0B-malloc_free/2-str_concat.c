#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - count the characters on a string
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, i2;
	char *array;

	l1 = 0;

	while (s1[l1] != '\0')
	{
		l1++;
	}

	l2 = 0;

	while (s2[l2] != '\0')
	{
		l2++;
	}

	array = malloc(sizeof(char) * l1 + l2);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i != l1; i++)
	{
		array[i] = s1[i];
	}

	i2 = 0;
	for (; i != l1 + l2; i++)
	{
		array[i] = s2[i2];
		i2++;
	}

	return (array);
}
