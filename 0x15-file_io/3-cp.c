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
	int fd1, fd2;
	ssize_t r;
	char buffer[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
		dprintf(2, "Error: Can't write to file %s\n", av[2]), exit(99);
	while ((r = read(fd1, buffer, 1024)) > 0)
			if (write(fd2, buffer, r) != r)
				dprintf(2, "Error: Can't write to file %s\n", av[2]), exit(99);
	if (r == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd1 = close(fd1);
	if (fd1 == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd1), exit(100);
	fd2 = close(fd1);
	if (fd2 == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd2), exit(100);
	return (EXIT_SUCCESS);
}
