#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - prints buffer in hexa
 * @accept: the address of memory to print
 * @s: char
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
