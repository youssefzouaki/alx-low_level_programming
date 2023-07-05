#include "main.h"

/**
 * _puts_recursion - writes the character c to stdout
 * @s: The character to print
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
