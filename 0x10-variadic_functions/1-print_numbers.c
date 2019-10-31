#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @n: int
 * @separator: print between ints
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

if (n)
	{

va_start(args, n);

	for (i = 0; i < n; i -= -1)
		{
		printf("%d", va_arg(args, int));

	if ((i < n - 1) && separator)
		printf("%s", separator);
		}

va_end(args);
	}

printf("\n");
}
