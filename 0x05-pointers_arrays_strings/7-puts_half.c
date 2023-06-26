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

	n = (_strlen(str) + 1 )/ 2;
	str = str + n;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
