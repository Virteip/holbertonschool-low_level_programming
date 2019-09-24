#include "holberton.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
**/
void jack_bauer(void)
{
int c,d;

	for (c = 0; c <= 23; c++)
	{
		for (d = 0; d <= 59; d++)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(':');
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar('\n');
		}
	}
}
