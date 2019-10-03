#include "holberton.h"
/**
 * string_toupper - count the characters on a string
 * @c: a pointer the integer we want to set to 402
 *
 *
 * Return: char
 */
char *string_toupper(char *c)
{
	int length = 0;
	int a;

	while (c[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		if (c[a] >= 97 && c[a] <= 122)
		{
		c[a] = c[a] - 32;
		}
	}

	return (c);
}
