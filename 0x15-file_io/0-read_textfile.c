#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: z- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t d;
	ssize_t z;
	ssize_t x;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	x = read(d, buffer, letters);
	z = write(STDOUT_FILENO, buffer, x);

	free(buffer);
	close(d);
	return (z);
}
