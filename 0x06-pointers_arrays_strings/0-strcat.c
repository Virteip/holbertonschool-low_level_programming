#include "holberton.h"
/**
 * _strcat - count the characters on a string
 * @dest: a pointer the integer we want to set to 402
 * @src: pointer
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int lengthsrc, lengthdest;

	lengthdest = 0;
	while (dest[lengthdest] != '\0')
	{
		lengthdest++;
	}


	lengthsrc = 0;
	while (src[lengthsrc] != '\0')
	{
		dest[lengthdest] = src[lengthsrc];
		lengthdest++;
		lengthsrc++;
	}

	return (dest);
}
