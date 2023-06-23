#include "main.h"
/**
 * print_diagonal - draws a diagonal in the terminal.
 * @n: diagonal longth
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			for (j = 0; j < i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
	
}
