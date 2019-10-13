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
	if (argc - 1 > 1)
	{
		printf("%d \n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
}
