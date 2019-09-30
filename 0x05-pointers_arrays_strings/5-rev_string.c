#include <stdio.h>
#include "holberton.h"
/**
  * modif_my_param - set the integer to 402
  * @s: a pointer the integer we want to set to 402
  *
  * Return: int
  */
void rev_string(char *s)
{
/*int i, g;

g = 0;
for(i = sizeof(s); i >= 0; i--)
{
	s[g] = s[i];
	g++;
}*/
int g=0;
while (g != sizeof(s))
{
int i = sizeof(s);
	s[g]=s[i];
	g++;
	i--;
}
}

