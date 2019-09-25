#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
*
* Return: Always.
*/
void print_times_table(int n)
{
	int a, b, mult;
		
if (n < 15 && n > 0)
{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			mult = a * b;

			if (mult < 10)
			{
			_putchar ((mult % 10) + '0');
			}
			else if (mult >= 10 && mult <=99)
			{
			_putchar ((mult / 10) + '0');
			_putchar ((mult % 10) + '0');
			}
			else if (mult >= 100)
			{
			_putchar ((mult / 100) + '0');
			_putchar ((mult / 10) + '0');
			_putchar ((mult % 10) + '0');
			}
			if (b != n && b < 10)
			{
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
			_putchar (' ');
			}
			else if (b != n && b >= 10 && b <= 99 ) 
			{
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
			}
			else if (b != n && b >= 100)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
_putchar ('\n');
	}
} else {
	
}

}
