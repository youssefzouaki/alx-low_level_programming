#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copies the content of a file to another file.
 * @ac: tow arguments: file_to & file_from
 * @av: file_from
 * Return: 0 succec.
*/
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r;
	char buffer[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to file %s\n", av[2]), exit(99);

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, r) != r)
			dprintf(2, "Error: Can't write to file %s\n", av[2]), exit(99);
	}

	if (r == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_from = close(fd_from);
	if (fd_from == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);

	fd_to = close(fd_to);
	if (fd_to == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
