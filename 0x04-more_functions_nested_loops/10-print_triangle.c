#include "holberton.h"
/**
* print_triangle - check the code for Holberton School students.
*@size: integer.
* Return: Void.
*/
void print_triangle(int size)
{
	if (size > 0)
	{
	int i;
	int x;

		for (i = 1; i <= size; i++)
		{
			for (x = 1; x <= size; x++)
			{
				if (x <= size - i)
				{
				_putchar(' ');
				}
				else
				{
				_putchar ('#');
				}
			}

		_putchar ('\n');
		}

	}
}
