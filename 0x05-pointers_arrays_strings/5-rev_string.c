#include "holberton.h"
/**
* rev_string - set the integer to 402
* @s: a pointer the integer we want to set to 402
*
* Return: int
*/
void rev_string(char *s)
{
	int i, g, h;

	g = sizeof(s);

	for (i = 0; i <= g; i++)
	{
	h = s[i];
	s[i] = s[g];
	s[g] = h;
	g--;
	}

}
