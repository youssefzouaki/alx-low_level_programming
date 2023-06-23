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
		for (l = 0; l < 10 ; l++)
		{
		_putchar(l + '0');
		}
		for (l = 0; l < 5 ; l++)
		{
			_putchar('1');
			_putchar(l + '0');
		}

		_putchar('\n');
	}
}
