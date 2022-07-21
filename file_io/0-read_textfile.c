#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @letters: number of letters it should read and
 * and print
 * @filename: pointer to file
 *
 * Return: numbers of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int count;

	/**
	* assign it a memory space check malloc
	*/
	buffer = malloc(sizeof(size_t) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	count = read(fd, buffer, letters);
	if (count < 0)
		return (0);

	count = write(STDOUT_FILENO, buffer, count);
	if (count < 0)
		return (0);

	free(buffer);
	close(fd);
	return (count);
}

