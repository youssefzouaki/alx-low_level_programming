#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * ex 2 and 4 followed by a new line.
 * 
*/

void print_most_numbers(void)
{
	int l;

	for (l = 0; l < 10 ; l++)
	{
		if (l != 2 && l != 4)
		_putchar(l + '0');
	}
	_putchar('\n');
}
