#include "holberton.h"
/**
* _isupper - check the code for Holberton School students.
*@c: ineteger.
* Return: Always.
*/
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);

}
