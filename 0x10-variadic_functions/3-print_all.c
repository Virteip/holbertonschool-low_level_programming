#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - print N arguments
 * @format: constant
 *
 *
 *
 *
 **/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s, *comma;

	va_start(ap, format);

	while (format && format[i])
	{
		comma = "";
		if (format[i + 1])
			comma = ", ";

		switch (format[i])
		{
		case 's':
			s = va_arg(ap, char*);
			if (!s)
				s = "(nil)";

			printf("%s%s", s, comma);
			break;

		case 'i':
			printf("%d%s", va_arg(ap, int), comma);
			break;

		case 'c':
			printf("%c%s", va_arg(ap, int), comma);
			break;

		case 'f':
			printf("%f%s", va_arg(ap, double), comma);
			break;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}
