#include "holberton.h"
<<<<<<< HEAD
/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: string of binary
=======

/**
 * print_binary - check the code for Holberton School students.
 * @n: string of binary
>>>>>>> 901627ce7d63005b8b4b31c5b4634e8fad024c62
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
<<<<<<< HEAD
	unsigned int decimal;

	decimal = 0;

	for (; *b != '\0'; b++)
	{
		if (*b == '1')
		{
			decimal = (decimal >> 1) | 1;
		}
		else if (*b == '0')
		{
			decimal = decimal >> 1;
		}
		else
		{
			return (0);
		}
	}

=======
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
>>>>>>> 901627ce7d63005b8b4b31c5b4634e8fad024c62
}
