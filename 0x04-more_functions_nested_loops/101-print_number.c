#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input n
*/

void print_number(int n)
{
	unsigned int i, p;

	i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	p = n;
	while (p / 10 != 0)
	{
		p /= 10;
		i *= 10;
	}
	while (i != 1)
	{
		_putchar(n / i + '0');
		n %= i;
		i /= 10;
	}
	_putchar(n % 10 + '0');
}
