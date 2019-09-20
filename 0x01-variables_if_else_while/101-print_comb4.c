#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int l;
int x;
for (n = 48; n <= 57; n++)
{
	for (l = 48; l <= 57; l++)
	{
		for (x = 48; x <= 57; x++)
		{
			if (n != l && n < l)
			{
				if (l != x && l < x)
				{
				putchar(n);
				putchar(l);
				putchar(x);
					if (n != '7' || l != '8' || x != '9')
							{
						putchar(',');
						putchar(' ');
							}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
