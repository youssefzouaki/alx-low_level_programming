#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{
	int l, i;

	for (i = 0 ; i < 10; i++)
	{
		for (l = 0; l <= 14 ; l++)
		{
			if (l > 9)
			_putchar('1');
		_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
