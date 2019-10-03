#include "holberton.h"
/**
 * cap_string - count the characters on a string
 * @c: a pointer the integer we want to set to 402
 *
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int length = 0;
	int a;

	while (c[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		if ((c[a] == ' ' || c[a] == '\n' || c[a] == '.' || c[a] == ';'
		    || c[a] == '"' || c[a] == '.' || c[a] == '?' || c[a] == '!'
		    || c[a] == '(' || c[a] == ')' || c[a] == '{' || c[a] == '}'
		    || c[a] == '0' || c[a] == 9 || c[a] == ',' || c[a] == c[0])
		    && (c[a + 1] >= 97 && c[a + 1] <= 122))
		{
		c[a + 1] = c[a + 1] - 32;
		}
	}

	return (c);
}
