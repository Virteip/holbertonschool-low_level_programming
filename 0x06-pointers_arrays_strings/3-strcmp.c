#include "holberton.h"
/**
 * _strcmp - count the characters on a string
 * @s1: a pointer the integer we want to set to 402
 * @s2: pointer
 *
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
	int pos;
	int res;

	for (pos = 0; pos != '\0'; pos++)
	{
		*s2 += s1[pos];
		*s1 += s2[pos];
	}

	res = *s1 - *s2;

	return (res);
}
