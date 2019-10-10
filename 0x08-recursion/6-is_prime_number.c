#include "holberton.h"
#include <stdio.h>
/**
 * _numprime - print result from numroot.
 * @number: number.
 * @var: raiz number.
 *
 * Return: raiz of the number.
 */
int _numprime(int number, int var)
{
	int mod = number % var;

	if (number <= 1)
	{
		return (0);
	}

	if (var < number &&  mod == 0)
	{
		return (0);
	}


	if (var == number && mod == 0)
	{
		return (1);
	}

	return (_numprime(number, var + 1));
}

/**
 * is_prime_number - help to find raiz nuber.
 * @n: number to find raiz.
 * Return: raiz of the number.
 */
int is_prime_number(int n)
{
	int res = _numprime(n, 2);

	return (res);
}
