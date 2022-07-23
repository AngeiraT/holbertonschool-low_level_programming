#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: the number of arguments.
 * @argv: array of arguments, the string
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int fd, fd2, close_test, close_test2, read_ct;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((read_ct = read(fd, buffer, 1024)) > 0)
	{
		if (fd2 == -1 || (write(fd2, buffer, read_ct) != read_ct))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_ct == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	close_test = close(fd);
	if (close_test == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd), exit(100);

	close_test2 = close(fd2);
	if (close_test2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);
return (0);
}
