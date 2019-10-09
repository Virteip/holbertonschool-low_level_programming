#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s: reverse.
 * Return: N\a.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
