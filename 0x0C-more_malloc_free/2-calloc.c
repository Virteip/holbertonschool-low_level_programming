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
	unsigned int *array, s;
	unsigned int i = 0;

	s = size * nmemb;

	array = malloc(size * nmemb);

	if ((array != NULL) && (size != 0))
	{
		while (i < s)
		{
			array[i] = 0;
			i++
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
