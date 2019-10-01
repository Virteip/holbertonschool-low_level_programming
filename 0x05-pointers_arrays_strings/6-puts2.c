#include "holberton.h"
/**
* puts2 - set the integer to 402
* @str: a pointer the integer we want to set to 402
*
* Return: int
*/
void puts2(char *str)
{
	int g, b;

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}

	b = 0;
	while (b != g)
	{
	_putchar(str[b]);
	b = b + 2;
	}
	_putchar('\n');
}
