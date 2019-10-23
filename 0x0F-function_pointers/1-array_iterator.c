#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - function that prints name
 * @array: array
 * @size: size
 * @action: action
 *
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
