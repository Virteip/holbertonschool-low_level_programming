#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_to_98(int n)
{
if (n != 98)
{
	while (n != 98)
	{
		printf("%d", n);
		printf(",");
			if (n < 98)
			{
				n++;
			}
			else
			{
				n--;
			}
	}
puts("98");
}
else
{
	printf("%d\n", n);
}

}
