#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i, s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = size * nmemb;

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		return (NULL);
	}


		for (i = 0; i < s; i++)
		{
			array[i] = 0;
		}
		return (array);
}
