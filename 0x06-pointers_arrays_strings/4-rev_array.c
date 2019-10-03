#include "holberton.h"
/**
 * reverse_array - set the integer to 402
 * @a: a pointer the integer we want to set to 402
 * @n: pointer
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i;
	int h;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		h = a[i];
		a[i] = a[n];
		a[n] = h;
		n--;
	}
}
