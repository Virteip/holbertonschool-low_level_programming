#include "holberton.h"
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

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";
		l1 = 0;
		while (s1[l1])
			l1++;

		array = malloc(sizeof(*array) * l1 + n + 1);

		if (array == NULL)
			return (NULL);

		for (i = 0, i2 = 0; i < (l1 + n); i++)
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
		array[i] = '\0';
		return (array);
}
