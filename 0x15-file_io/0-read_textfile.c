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

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * read_textfile - check the code for Holberton School students.
 * @filename: str
 * @letters: byte n
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr, len;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		free(buf);
		return (0);
	}

	op = open(filename, O_RDONLY);
	if (!op)
		return (0);

	rd = read(op, buf, letters);
	if (!rd)
	{
		free(buf);
		close(op);
		close(rd);
		return (0);
	}
	len = _strlen(buf);
	wr = write(STDOUT_FILENO, buf, len);
	if (!wr)
		return (0);

	if (rd != wr)
		return (0);

	free(buf);
	close(op);

	return (rd);
}
