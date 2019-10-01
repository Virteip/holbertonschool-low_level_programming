#include "holberton.h"
/**
  * print_rev - set the integer to 402
  * @s: a pointer the integer we want to set to 402
  *
  * Return: int
  */
void print_rev(char *s)
{
	int arrayNum;
	int i;

	i = 0;
	while (*s != '\0')
	{
	s++;
	i++;
	}

	for (arrayNum = i; arrayNum >= 0; arrayNum--)
	{
	if (arrayNum != i)
	{
	_putchar(*s);
	}
	s--;
	}


	_putchar('\n');
}
