#include "main.h"

/**
 * _puts -  prints half of a string,
 * followed by a new line.
 * @str: pointer to a string
 *
 * Return: nothing.
*/

void puts_half(char *str)
{
	int n;
	int i;
	char *s;

	i = 0;
	s = str;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	n = (i + 1 )/ 2;
	str = str + n;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
