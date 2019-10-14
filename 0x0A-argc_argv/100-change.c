#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument value
 *
 *
 * Return: 0 if success and print answer in res.
 */
int main(int argc, char *argv[])
{
	int i, argcount, div, res;
	int coins[5] = {25, 10, 5, 2, 1};

	res = 0;
	if (argc == 2)
	{
		argcount = atoi(argv[argc - 1]);

		for (i = 0; argcount > 0;)
		{
			div = argcount / coins[i];
			res += div;
			argcount = argcount % coins[i];

			if (argcount % coins[i] != 0)
				i++;
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
