#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen  - set the integer to 402
 * @s: a pointer the integer we want to set to 402
 *@ac: argument count
 * Return: int
 */
int _strlen(int ac, char *s)
{
	int i = 0;
	int j = 0;

	while (j < ac)
	{
		while (*s != '\0')
		{
			s++;
			i++;
		}
		j++;
	}
	return (i);
}

/**
 * concat - count the characters on a string
 * @s: char
 * @c: int
 * Return: char
 */
char *concat(int c, char **s)
{
	int i, i2, j;
	char *array;
	int l = _strlen(c, *s);

	array = malloc(sizeof(char) * l * c + 1);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	i2 = 0;

	for (i = 0; i < c; i++)
	{
		for (j = 0; s[i][j] != '\0'; j++)
		{
			array[i2] = s[i][j];
			i2++;
		}
		array[i2] = '\n';
		i2++;
	}

	return (array);
}

/**
 * argstostr - count the characters on a string
 * @ac: char
 * @av: char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == '\0')
	{
		return (NULL);
	}

	return (concat(ac, av));
}
