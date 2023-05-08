#include "main.h"

/**
 * append_text_to_file - append text
 * @filename : char pointer
 * @text_content : char pointer
 * Return: n
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int l;
	int rwr;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;

		rwr = write(fd, text_content, l);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
