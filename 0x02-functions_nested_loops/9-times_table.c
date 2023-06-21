#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int i, j, k, u, d;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				u = k % 10;
				d = (k - u) / 10;
				_putchar(d + '0');
				_putchar(u + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
