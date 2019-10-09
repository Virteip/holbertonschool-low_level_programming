#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - check the code for Holberton School students.
 *@x: number.
 *@y: power.
 * Return: power.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0 || x == 1 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
