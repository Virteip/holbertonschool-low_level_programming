#include "holberton.h"
/**
* _isdigit - check the code for Holberton School students.
*@c: ineteger.
* Return: Always.
*/
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);

}
