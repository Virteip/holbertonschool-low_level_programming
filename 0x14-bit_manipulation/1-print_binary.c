#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: string of binary
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
