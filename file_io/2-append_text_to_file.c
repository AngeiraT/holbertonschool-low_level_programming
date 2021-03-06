#include "main.h"

/**
 * append_text_to_file - appends text to a file.
 * @filename: name of the file.
 * @text_content: terminated string to add at the end.
 * Return: 1 on success or -1 if fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, k, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		k = write(fd, text_content, len);
		if (k == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);

}
