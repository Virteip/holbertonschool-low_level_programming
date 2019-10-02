#include "holberton.h"
#include <stdio.h>
/**
* puts_half - set the integer to 402
* @str: a pointer the integer we want to set to 402
*
* Return: int
*/
void print_array(int *a, int n)
{
	int s;
	
	s = 0;
	n = n - 1;
	while (s <= n)
	{
		if (s != n)
		{
		printf("%d ,",a[s]);
		}
		else
		{
		printf("%d",a[s]);
		}
	s++;
	}

	printf("\n");
}
