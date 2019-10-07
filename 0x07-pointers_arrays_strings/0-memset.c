#include "holberton.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char* p = (char*)s;
	for (i = 0; i < n; ++i) 
	{
		p[i] = b;
	}
	return (s);
}
