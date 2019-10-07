#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - prints buffer in hexa
 * @accept: the address of memory to print
 * @s: the size of the memory to print
 *
 *
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, n;

	i = 0;
	n = 0;
	while ((*s <= 122 && *s >= 97) || (*s <= 90 && *s >= 65))
	{
		s++;
		n++;
	}

	i = 0;
	for (j = 0; j < n; ++j)
	{
		k = 0;
		while (k < n)
		{
			if (accept[j] == s[k])
			{
				i++;
			}
				k++;
		}

	}

	return (k);
}
