#include <stdio.h>
#include <stdlib.h>
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
