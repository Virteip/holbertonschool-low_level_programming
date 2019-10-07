#include "holberton.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: integer.
 *
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, n;

	while (*accept != '\0')
	{
		accept++;
		n++;
	}

	for (j = 0; j < n; ++j)
	{
		k = 0;
		while (k < n)
		{
			if (s[j] == accept[k])
			{
				i++;
			}
				k++;
		}
	}

	return (k);
}
