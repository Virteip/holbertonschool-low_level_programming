#include "holberton.h"
/**
* print_line - check the code for Holberton School students.
*@n: integer
* Return: Void.
*/
void print_line(int n)
{
	if (!(n <= 0))
	{
		int i;

		for (i = 0 ; i <= n; i++)
		{
		_putchar ('_');
		}
	}
_putchar('\n');
}
