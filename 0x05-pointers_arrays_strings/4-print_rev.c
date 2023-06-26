#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: pointer to a string.
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int i, len;
	char* str;

	str = s;
	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for ( i = len - 1; i >= 0; i--)
	{
		_putchar(*(s+i));
	}

	_putchar('\n');
}
