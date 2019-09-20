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
for (n = 48; n <= 57; n++)
{
for (l = 48; l <= 57; l++)
{
putchar(n);
putchar(l);
if (n != '9' || l != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
