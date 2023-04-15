#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads textfile and prints to standard output.
 * @filename: name of file to be read.
 * @letters: number of letters to read and print.
 *
 * Return: number of letters printed or 0 if unsuccessful.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (z);
}
