#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints name
 * @name: char name to be printed
 * @f: function called to print name
 *
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
