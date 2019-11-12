#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: str
 * @letters: byte n
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	op = open(filename, O_RDONLY);
	if (!op)
		return (0);

	rd = read(op, buf, letters);
	if (!rd)
	{
		free(buf);
		close(op);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (!wr)
		return (0);

	if (rd != wr)
		return (0);

	free(buf);
	close(op);

	return (rd);
}
