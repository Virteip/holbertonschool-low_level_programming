#include "holberton.h"
/**
* print_alphabet_x10 - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int c;

	while (c <= 9)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		c++;
		_putchar('\n');
	}
}
