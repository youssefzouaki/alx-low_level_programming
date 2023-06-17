#include <stdio.h>
/**
 * main - prints all single digit numbers of base 16 starting from 0,
 * followed by a new line.
 *
 * Return: Return 0
 */
int main(void)
{
	int l;
	char c;

	for (l = 48; l < 58 ; l++)
	{
		putchar(l);
	}
	for (c = 'a'; c < 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
