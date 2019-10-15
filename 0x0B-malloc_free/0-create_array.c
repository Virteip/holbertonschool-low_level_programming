#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

		array = malloc(sizeof(char) * size);

		if ((array != NULL) && (size != 0))
		{
			while (i < size)
			{
				array[i] = c;
				i++;
			}
			return (array);
		}
		else
		{
			return (NULL);
		}
}
