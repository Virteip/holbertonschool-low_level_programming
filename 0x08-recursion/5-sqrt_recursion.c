#include "holberton.h"
#include <stdio.h>
/**
 * _numroot - print result from numroot.
 * @number: number.
 * @var: raiz number.
 *
 * Return: raiz of the number.
 */
int _numroot(int number, int var)
{
	if (number == var * var)
	{
		return (var);
	}

	else if (var * var > number)
	{
		return (-1);
	}

	return (_numroot(number, var + 1));
}
/**
 * _sqrt_recursion - help to find raiz nuber.
 * @n: number to find raiz.
 * Return: raiz of the number.
 */
int _sqrt_recursion(int n)
{
	int res = _numroot(n, 1);

	return (res);
}
