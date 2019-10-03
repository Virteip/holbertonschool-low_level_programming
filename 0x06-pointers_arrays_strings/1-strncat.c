#include "holberton.h"
/**
 * _strncat - count the characters on a string
 * @dest: a pointer the integer we want to set to 402
 * @src: pointer
 * @n: integer
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthdest, pos;

	lengthdest = 0;
	while (dest[lengthdest] != '\0')
	{
		lengthdest++;
	}

	for (pos = 0; pos < n && src[pos] != '\0'; pos++)
	{
		dest[lengthdest] = src[pos];
		lengthdest++;
	}

	return (dest);
}
