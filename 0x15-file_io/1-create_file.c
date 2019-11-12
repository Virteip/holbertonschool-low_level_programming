#include "holberton.h"

/**
 *_strlen  - set the integer to 402
 * @s: a pointer the integer we want to set to 402
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - check the code for Holberton School students.
 * @filename: str
 * @text_content: byte n
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (op == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (close(op) == -1 ? -1 : 1);
	}

	wr = write(op, text_content, _strlen(text_content));

	if (wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
