#include "main.h"
/**
 * print_triangle - draws a triangle in the terminal.
 * @size: triangle size
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size ; i++)
	{
		for (j = 1; j < size - i ; j++)
			_putchar(' ');
		for (j = size - i; j <= size ; j++)
			_putchar('#');
		_putchar('\n');
	}
	}
}
