#include <stdlib.h>
#include <stdio.h>

int check(char *s)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] < 48 || s[i] > 97)
		{
			return (1);
		}
	}
	return(0);
}

int main (int argc, char *argv[])
{
	int i,r;

	for (i = 0; i < argc; i++)
	{
		if (check(*argv) == 1)
		{
			for (i = 1; i < argc; i++)
			{
				r += atoi(argv[i]);
			}
		}
		else if (check(*argv) == 0)
		{
			puts("Error");
			return (1);
		}
	}
		printf("%i \n",r);
		return (r);
}
