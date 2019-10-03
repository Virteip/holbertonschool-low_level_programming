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
	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		s2++;
	}

	return (*s1 - *s2);
}
