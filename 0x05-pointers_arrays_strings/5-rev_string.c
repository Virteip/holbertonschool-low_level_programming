#include "holberton.h"
/**
* rev_string - set the integer to 402
* @s: a pointer the integer we want to set to 402
*
* Return: int
*/
void rev_string(char *s)
{
	int a, length;
	char h;

	length = 0;
	while (s[length] != '\0')
	{
	length++;
	}

	length = length - 1;

	for (a = 0; a <= length; a++)
	{
	h = s[a];
	s[a] = s[length];
	s[length] = h;
	length--;
	}

}
