#include "holberton.h"
/**
 * _strchr - prints buffer in hexa
 * @c: the address of memory to print
 * @s: the size of the memory to print
 *
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = s;

	for (i = 0; i <= '0'; ++i)
	{
		if (p[i] == c)
		{
			s = &p[i];
			i++;
			return (s);
		}
	}
	return ('\0');
}
