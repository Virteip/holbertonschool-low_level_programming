#include "holberton.h"
/**
* modif_my_param - set the integer to 402
* @s: a pointer the integer we want to set to 402
*
* Return: int
*/
void _puts(char *str)
{
	while (*str != '\0') 
	{
	_putchar(*str);
	str++;
	}
_putchar('\n');
}
