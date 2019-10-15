#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s: string.
 * Return: N\a.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *array;
	int i = 0;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen_recursion(str) - 1;

	array = malloc(sizeof(char) * length);

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		array[i] = str[i];
		i++;
	}
	return (array);
}
