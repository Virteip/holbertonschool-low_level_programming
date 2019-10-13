#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - prints buffer in hexa
 * @argc: argument count
 * @argv: argument value
 *
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc > 2)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d \n", res);
		return (0);
	}

	puts("Error");
	return (1);
}
