#include "holberton.h"
/**
 * _strspn - Prints matching bytes.
 * @s:  the contain of the variable in reverse
 * @accept: character
 * Return: unsigned.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int si, cj;

	for (si = 0; s[si] != '\0'; si++)
	{
		for (cj = 0; accept[cj] != '\0'; cj++)
		{
			if (accept[cj] == s[si])
				break;
		}
		if (!accept[cj])
			break;
	}
	return (si);
}
