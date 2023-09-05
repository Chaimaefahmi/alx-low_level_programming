#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: const char
 * @letters: the number of letters to be read
 * Return: if the file can not be opened or read, return 0
 *           if the file can not be opened or read, return 0
 *           if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufff;
	ssize_t fl;
	ssize_t w;
	ssize_t v;

	fd = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	bufff = malloc(sizeof(char) * letters);
	v = read(fl, bufff, letters);
	w = write(STDOUT_FILENO, bufff, v);

	free(bufff);
	close(fl);
	return (w);
}
