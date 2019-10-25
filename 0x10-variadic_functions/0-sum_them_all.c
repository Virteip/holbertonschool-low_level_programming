#include <stdarg.h>
/**
 * sum_them_all - add N arguments
 * @n: constant
 *
 *
 *
 *
 * Return: sum total
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	if (args == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);


}
