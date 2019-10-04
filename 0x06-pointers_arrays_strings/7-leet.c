#include "holberton.h"
/**
 * leet - count the characters on a string
 * @c: a pointer the integer we want to set to 402
 *
 *
 * Return: char
 */
char *leet(char *c)
{
	int length;
	int a;
	char letters[10] = "aAeEoOtTlL";
	char numbers[10] = "4433007711";

	length = 0;
	while (c[length] != '\0')
	{
		a = 0;
		while (letters[a] != '\0')
		{
			if (c[length] == letters[a])
			{
				c[length] = numbers[a];
			}
			a++;
		}
		length++;
	}
	return (c);
}
