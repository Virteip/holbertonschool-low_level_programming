#include "holberton.h"
/**
 * rot13 - count the characters on a string
 * @c: a pointer the integer we want to set to 402
 *
 *
 * Return: char
 */
char *rot13(char *c)
{
	int length;
	int a;
	char in[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	length = 0;
	while (c[length] != '\0')
	{
		a = 0;
		while (in[a] != '\0')
		{
			if (c[length] == in[a])
			{
				c[length] = out[a];
				break;
			}
			a++;
		}
		length++;
	}
	return (c);
}
