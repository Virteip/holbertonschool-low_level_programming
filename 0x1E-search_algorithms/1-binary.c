#include "search_algos.h"
/**
 * binary_search - binary search algo.
 *
 * @array: pointer to head.
 * @size: size of the array
 * @value: value to look for inside array
 * Return: value on success, -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array)
	{
		while (low <= high)
		{
			mid = low + (high - low) / 2;

			if (array[mid] == value)
			{
				return (mid);
			}

			if (array[mid] > value)
			{
				high = mid - 1;
			}

			if (array[mid] < value)
			{
				low = mid + 1;
			}
		}
	}
	return (-1);
}
