#include "holberton.h"
/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: string of binary
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
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

}
