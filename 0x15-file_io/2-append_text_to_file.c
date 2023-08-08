#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, len == 0;
	ssize_t leen;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		leen = write(a, text_content, len)
	}

	close(a);
	if (leen == -1)
		return (-1);
	return (1);
}
