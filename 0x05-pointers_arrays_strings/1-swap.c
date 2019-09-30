#include <stdio.h>
/**
* modif_my_param - set the integer to 402
* @m: a pointer the integer we want to set to 402
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{	
	int c = *a;
	int d = *b;


	*b = c;
	*a = d;
}
