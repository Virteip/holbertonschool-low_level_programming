#include <stdlib.h>
#include <stdio.h>
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
	int i, r;

	if (argc == 0)
	{
		printf("0 \n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > 48 && *argv[i] < 57)
			{
				r += atoi(argv[i]);
			}
			else
			{
				puts("Error");
				return (1);
			}
		}
		printf("%i \n", r);
	}
	return (0);
}
