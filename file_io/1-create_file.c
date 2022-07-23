#include "main.h"

/**
 * create_file - creates a file
 * @filename: points to the file to create
 * @text_content: points to the string hello world
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, k, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
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
