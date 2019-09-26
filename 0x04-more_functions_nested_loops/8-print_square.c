#include "holberton.h"
/**
* print_square - check the code for Holberton School students.
*@size: integer
* Return: Void.
*/
void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int f = 0;

	while (f < size)
	{
		for (i = 1 ; i <= size; i++)
		{
		_putchar ('#');
		}
	_putchar ('\n');
	f++;
	}
	}
	else if (size <= 0)
	{
		_putchar ('\n');
	}
}
