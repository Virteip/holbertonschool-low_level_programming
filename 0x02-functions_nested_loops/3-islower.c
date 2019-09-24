#include "holberton.h"
/**
* _islower - check the code for Holberton School students.
*@c: ineteger.
* Return: Always.
*/
int _islower(int c)
{
	if (c < 97)
		return (0);
	else
		return (1);

}
