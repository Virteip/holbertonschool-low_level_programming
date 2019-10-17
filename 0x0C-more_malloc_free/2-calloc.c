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
	unsigned int *array;
	unsigned int i = 0;

	array = malloc(size * nmemb);

	if ((array != NULL) && (size != 0))
	{
		array[i] = nmemb;

		return (array);
	}
	else
	{
		return (NULL);
	}
}
