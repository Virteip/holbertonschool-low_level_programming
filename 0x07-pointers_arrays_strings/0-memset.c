#include "holberton.h"
/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: integer
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p =  s;

	for (i = 0; i < n; ++i)
	{
		p[i] = b;
	}
	return (s);
}
