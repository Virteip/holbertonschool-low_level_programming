#include "holberton.h"
/**
* puts2 - set the integer to 402
* @str: a pointer the integer we want to set to 402
*
* Return: int
*/
void puts_half(char *str)
{
	int g, halfmod, half, n, length_of_the_string;

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}
	
	half = g / 2;
	halfmod = g % 2;
	length_of_the_string = g;

	if (halfmod == 0)
	{
		while (half <= g)
		{
		_putchar(str[half]);
		half = half + 1;
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		n = n + 1;
		length_of_the_string = length_of_the_string - 1;
		while (n <= length_of_the_string)
		{
		_putchar(str[n]);
		n++;

		}
	}

	_putchar('\n');
}
