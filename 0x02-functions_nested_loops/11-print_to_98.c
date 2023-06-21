#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98, 
 * followed by a new line.
 * 
 * 
*/

void print_to_98(int n)
{
	int i, u, d;

	for (i = n; i < 99; i++)
	{
		if (i < 10 && i > -10)
			{
				if (i < 0)
				{
					_putchar('-');
					_putchar(-i + '0');
				}
				else
				{
					_putchar(i + '0');
				}
				if (i != 98)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		else
		{
			if (i >= 0)
				{
				u = i % 10;
				d = (i - u) / 10;
				_putchar(d + '0');
				_putchar(u + '0');
				}
			else
				{
				u = -i % 10;
				d = (-i - u) / 10; 
				_putchar('-');
				_putchar(d + '0');
				_putchar(u + '0');
				}
				if (i != 98)
				{
				_putchar(',');
				_putchar(' ');
				}
		}
	}
	_putchar('\n');
}
