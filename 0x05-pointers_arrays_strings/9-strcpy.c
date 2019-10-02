#include "holberton.h"
/**
  * _strcpy - count the characters on a string
  * @dest: a pointer the integer we want to set to 402
  * @src: pointer
  * Return: char
  */
char *_strcpy(char *dest, char *src)
{
	int a, length;

	length = 0;
	while (src[length] != '\0')
	{
	length++;
	}


	for (a = 0; a <= length; a++)
	{
		dest[a] = src[a];
	}

return (dest);
}
