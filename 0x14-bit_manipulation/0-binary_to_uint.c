#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: string of binary
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, i, j;

	if (b == NULL)
	{
		return (0);
	}

	j = 0;
	while (b[j])
	{
		j++;
	}
	j--;


	decimal = 0;
	for (i = 0; b[i]; i++, j--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			decimal += (b[i] - '0') << j;
		}
	}

	return (decimal);

}
