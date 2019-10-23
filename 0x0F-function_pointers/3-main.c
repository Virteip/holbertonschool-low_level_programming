#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main
 * @argc: arg count
 * @argv: arg array
 *
 * Return: int
 *
 **/
int main(int argc, char **argv)
{
	int inta, intb;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' && atoi(argv[3]) == 0) ||
	    (argv[2][0] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		return (100);
	}

		inta = atoi(argv[1]);
		intb = atoi(argv[3]);

		printf("%d\n", f(inta, intb));

		return (0);

}
