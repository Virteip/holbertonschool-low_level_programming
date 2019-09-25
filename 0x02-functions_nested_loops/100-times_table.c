#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
*
* Return: Always.
*/
void print_times_table(int n)
{
	int a, b, mult;

if (n > 15 || n < 0)
{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			mult = a * b;

			if (mult < 10)
			{
				if (b > 0)
				{
				_putchar (' ');
				}
			_putchar ((mult % 10) + '0');
			}
				else
				{
				_putchar ((mult / 10) + '0');
				_putchar ((mult % 10) + '0');
				}
			if (b != 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
_putchar ('\n');
	}
}
}
