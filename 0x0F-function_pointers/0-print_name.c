#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: char name to be printed
 * @f: function called to print name
 *
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;

	f(name);
}
