#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'q' && letter != 'e')
putchar(letter);
letter = 'e';
putchar('\n');
return (0);
}
