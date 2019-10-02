#include "holberton.h"
/**
 * _atoi - check the code for Holberton School students.
 * @s: char
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i, res, sig;

	i = 0;
	res = 0;
	sig = 1;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
			if ((s[i + 1] < '0') || (s[i + 1] > '9'))
			{
				break;
			}
		}
		if (s[i] == '-')
		{
			sig *= -1;
		}
		i++;
	}

		return (res * sig);
}
