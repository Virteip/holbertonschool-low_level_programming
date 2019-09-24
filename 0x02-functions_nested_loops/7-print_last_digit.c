#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
*@n: integer.
* Return: Always.
*/
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
	l = l * -1;
	_putchar (l + '0');
	}
	else
	{
	_putchar(l + '0');
	}
	return (l);
}
