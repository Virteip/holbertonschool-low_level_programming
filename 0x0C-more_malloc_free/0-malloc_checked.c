#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(sizeof(void *) * b);

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
