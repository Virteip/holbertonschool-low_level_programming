#include "holberton.h"
/**
* modif_my_param - set the integer to 402
* @s: a pointer the integer we want to set to 402
*
* Return: int
*/
int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0') 
	{
	s++;
	i++;
	}
	return (i);
}
