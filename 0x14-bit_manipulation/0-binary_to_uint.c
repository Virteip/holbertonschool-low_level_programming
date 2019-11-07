#include "holberton.h"
/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: string of binary
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;

	for (decimal = 0; *b != '\0'; b++)
	{
		if (*b == '1')
		{
			decimal = (decimal << 1) | 1;
		}
		else if (*b == '0')
		{
			decimal <<= 1;
		}
		else
		{
			return (0);
		}
	}

	return (decimal);

}
