#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * filename: read text file
 * @letters: the number of letters it should read and print
 * Return: If the function fails or filename is NULL - 0.
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t d;
	ssize_t w;
	ssize_t t;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(d, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(d);

	return (w);
}
