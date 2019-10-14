#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument value
 *
 *
 * Return: 0 if success and print answer.
 */
int main(int argc, char *argv[])
{
	int res;
	(void)argc;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d \n", res);
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
