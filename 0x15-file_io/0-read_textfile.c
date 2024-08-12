#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints
 * @filename: pointer
 * @letters: number of letter to be read and printed
 *
 * Return: NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	int r, w;
	char *buffer;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	r = read(op, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';
	close(fd);

	w = write(STDOUT_FILENO, buffer, r);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}
	free(*buffer);
	return (w);
}



