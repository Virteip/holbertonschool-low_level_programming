#include "holberton.h"
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

	for (i = 0; i < '0'; ++i)
	{
		for (j = 0; j < '0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
