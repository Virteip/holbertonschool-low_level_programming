#include "holberton.h"
/**
* swap_int - set the integer to 402
* @a: a pointer the integer we want to set to 402
* @b: b pointer to int.
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;


	*b = c;
	*a = d;
}
