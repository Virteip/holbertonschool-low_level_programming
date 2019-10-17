#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - prints buffer in hexa
* @s1: the address of memory to print
* @s2: the size of the memory to print
* @n: int
* Return: Nothing.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		unsigned int l1, i, i2;
		char *array;
		char *nullvar = "";

		l1 = 0;
		if (s1 == NULL)
			s1 = nullvar;

		if (s2 == NULL)
			s2 = nullvar;

		while (s1[l1] != '\0')
			l1++;

		array = malloc(sizeof(char) * l1 + n + 1);

		if (array == NULL)
			return (NULL);

		for (i = 0, i2 = 0; i < (l1 + n + 1); i++)
		{
			if (i < l1)
			{
				array[i] = s1[i];
			}
			else
			{
				array[i] = s2[i2++];
			}
		}

		return (array);
}
