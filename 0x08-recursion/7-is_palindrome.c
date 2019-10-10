#include "holberton.h"
#include <stdio.h>
/**
 * length - check the code for Holberton School students.
 * @s: char
 * Return:  length.
 */
int length(char *s)
{
	if (*s)
	{
		return (length(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * compare - print result from numroot.
 * @s: char.
 * @len: length.
 *
 * Return: 0 or 1.
 */
int compare(int len, char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	if (s[len] != *s)
	{
		return (0);
	}

	return (compare(len - 2, s + 1));
}

/**
 * is_palindrome - help to find raiz nuber.
 * @s: string.
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	int res = length(s);

	return (compare(res - 1, s));
}
