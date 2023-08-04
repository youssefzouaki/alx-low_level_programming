#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	int j, i, bit, cmp = sizeof (n) * 8;

	j = cmp - 1;
	while (((n >> j) & 1) == 0 && j > 0)
		j--;
	for (i = j; i >= 0 ; i--)
	{
		bit = (n >> i) & 1;
		_putchar (bit + '0');
	}
	_putchar ('\n');
}
