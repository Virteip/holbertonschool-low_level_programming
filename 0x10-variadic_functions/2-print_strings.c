#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - print N arguments
 * @separator: constant
 * @n: unsigned int
 *
 *
 *
 * Return: n to print
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *tmp;

	if (n)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			tmp = va_arg(args, char*);

			if (tmp)
				printf("%s", tmp);

			else
				printf("(nil)");

			if ((i < n - 1) && separator)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
