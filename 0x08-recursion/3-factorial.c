#include "holberton.h"
#include <stdio.h>
/**
 * factorial - check the code for Holberton School students.
 *@n: reverse.
 * Return: factorial.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
		return (n * factorial(n - 1));
}
