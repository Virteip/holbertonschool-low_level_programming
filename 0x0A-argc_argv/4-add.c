#include <stdlib.h>
#include <stdio.h>

int check(char *s)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] < 48 || s[i] > 97)
		{
			return (0);
		}
	}
	return(1);
}


int main (int argc, char *argv[])
{
	int i,r;
	int check = 0;

	for (i = 0; i < argc; i++)
	{
		if (check == 1)
		{
			for (i = 1; i < argc; i++)
			{
				r += atoi(argv[i]);
			}
		}
		else
		{
			puts("Error");
			return (1);
		}
	}
		printf("%i",r);
		return (r);
}
