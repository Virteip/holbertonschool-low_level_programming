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
	unsigned int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[j])
			{
				break;
			}
		  k++;
		}

	}

	return (k);
}
