#include "holberton.h"
/**
* print_number - check the code for Holberton School students.
*@n: integer.
* Return: Always 0.
*/
void print_number(int n)
{
	unsigned int number = n;

	if (number < 0)
	{
		number * -1;
		_putchar ('-');
	}

	if (number >= 10)
	{
		if (b / 10)
		{
		print_number(b / 10);
		}
	_putchar(b % 10 + '0');
	}
}
