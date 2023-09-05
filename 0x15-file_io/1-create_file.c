#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer const char
 * @text_content: pointer string
 * Return: Returns: 1 on success, -1 on failure (file can not be created, 
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fl, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fl, text_content, l);

	if (fl == -1 || w == -1)
		return (-1);

	close(fl);

	return (1);
}
