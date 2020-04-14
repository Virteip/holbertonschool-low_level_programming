#include "search_algos.h"
/**
 * linear_search - linear search algo.
 *
 * @array: pointer to head.
 * @size: size of the array
 * @value: value to look for inside array
 * Return: value on success, -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0 ; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n",
			       i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
