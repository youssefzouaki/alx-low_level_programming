#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * 
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

/**
 * print_number - prints an integer.
 * @n: input n
*/
void print_number(int n)
{
	unsigned int i, p;

	i = 1;

	p = n;
	while (p / 10 != 0)
	{
		p /= 10;
		i *= 10;
	}
	while (i != 1)
	{
		_putchar (n / i + '0');
		n %= i;
		i /= 10;
	}
	_putchar (n % 10 + '0');
	_putchar ('\n');
}
/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: should be 1
 * @argv: pointer to a string containe an amount of money.
 *
 * Return: 0 if argc equale 1
 * return 1 if argc not exactly 1
*/
int main(int argc, char *argv[])
{
	int num, cents;

	if (argc != 2)
	{
		_putchar ('E');
		_putchar ('r');
		_putchar ('r');
		_putchar ('o');
		_putchar ('r');
		_putchar ('\n');
		return (1);
	}
	if (argv[1][0] == '-')
	{
		_putchar ('0');
		_putchar ('\n');
	}
	else
	{
		cents = atoi(argv[1]);
		num = cents / 25;
		cents %= 25;
		num += cents / 10;
		cents %= 10;
		num += cents / 5;
		cents %= 5;
		num += cents / 2;
		num += cents % 2;
		print_number (num);
	}
	return (0);
}
