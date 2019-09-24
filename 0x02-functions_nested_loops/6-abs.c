#include "holberton.h"
/**
* _abs - check the code for Holberton School students.
*@i: integer.
* Return: Always.
*/
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
