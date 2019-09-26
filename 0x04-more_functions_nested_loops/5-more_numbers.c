#include "holberton.h"
/**
* more_numbers - check the code for Holberton School students.
*
* Return: Void.
*/
void more_numbers(void)
{
	int i;
	int x = 0;

while (x < 10)
{
	for (i = 1; i <= 14; i++)
	{
		if (i < 10)
		{
		_putchar (i + '0');
		}
		else if (i >= 10)
		{
		_putchar ((i / 10) + '0');
		_putchar ((i % 10) + '0' '\n');
		}
	}
	x++;
	_putchar('\n');
}
}
