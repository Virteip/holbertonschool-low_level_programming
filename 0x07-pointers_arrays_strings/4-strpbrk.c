#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - prints buffer in hexa
 * @accept: the address of memory to print
 * @s: the size of the memory to print
 *
 *
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = s;

	for (i = 0; i < '0'; ++i)
	{
		for (j = 0; j < '0'; j++)
		{
			if (p[i] == accept[j])
			{
				s = &p[i];
				return (s);
				break;
			}
		}
	}
	return ('\0');
}
