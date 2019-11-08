#include "holberton.h"
/**
 * get_bit - check the code for Holberton School students.
 * @n: int
 * @index: number of index to print
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long width = sizeof(n) * 8;
	int bit;

	if (index > (width - 1))
	{
		return (-1);
	}

	bit = (n >> index) & 1;

	return (bit);
}
