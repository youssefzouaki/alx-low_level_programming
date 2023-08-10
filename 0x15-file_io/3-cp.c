#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to file %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * main - copies the content of a file to another file.
 * @ac: tow arguments: file_to & file_from
 * @av: file_from
 * Return: 0 succec.
*/
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char *buffer;

	if (ac != 3)
		dprintf(2, USAGE), exit(97);

	buffer = create_buffer(av[2]);
	fd_from = open(av[1], O_RDONLY);
	r = read(fd_from, buffer, 1024);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		if (r == -1 || fd_from == -1)
		{
			dprintf(2, ERR_NOREAD, av[1]);
			free(buffer);
			exit(98);
		}
		w = write(fd_to, buffer, r);
		if (fd_to == -1 || w == -1)
		{
			dprintf(2, ERR_NOWRITE, av[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd_from, buffer, 1024);
		fd_to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
	{
		char *buffer = malloc(sizeof(char) * 1024);

		if (buffer == NULL)
		{
			dprintf(2, ERR_NOWRITE, file);
			exit(99);
		}
	return (buffer);
	}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
	{
		int c;

		c = close(fd);
		if (c == -1)
		{
			dprintf(2, ERR_NOCLOSE, fd);
			exit(100);
		}
	}
