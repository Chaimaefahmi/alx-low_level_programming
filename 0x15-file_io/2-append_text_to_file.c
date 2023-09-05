#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: pointer
 * @text_content: string
 * Rturn: 1 on success and -1 on failure, If filename is NULL return -1
 * Return 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
