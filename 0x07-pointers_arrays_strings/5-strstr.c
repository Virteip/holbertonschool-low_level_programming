#include "holberton.h"
/**
 * _strstr - The name of the function.
 * @haystack:  var char
 * @needle: var char
 * Return: n.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);

		haystack = h + 1;
	}
	return ('\0');
}
