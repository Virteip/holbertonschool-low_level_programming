#include "holberton.h"
/**
* puts_half - set the integer to 402
* @str: a pointer the integer we want to set to 402
*
* Return: int
*/
void puts_half(char *str)
{
	int g, halfmod, half, n;

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}

	half = g / 2;
	halfmod = g % 2;


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
		n = (g - 1) / 2;
		n++;
		while (n <= g)
		{
		_putchar(str[n]);
		n++;
		}
	}

	_putchar('\n');
}
