#include "holberton.h"
/**
* print_line- check the code for Holberton School students.
*@n: integer.
* Return: Void.
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
	int i;
	int x;

		for (i = 1; i <= n; i++)
		{
			for (x = 1; x <= n; x++)
			{
				if (x < i)
				{
				_putchar (' ');
				}
			}

		_putchar ('\\');
		_putchar ('\n');
		}
			
	}
	
_putchar('\n');
}
