#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: pointer to a string.
 *
 * Return: nothing
*/

void puts2(char *str)
{
	char *s;

	i = 0;
	s = str;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	for (j = 0; j < i - 1 ; j += 2)
	{
		_putchar(*(str + j));
	}

	if (i % 2 != 0)
	_putchar(*(str + i - 1));

	_putchar('\n');
}
