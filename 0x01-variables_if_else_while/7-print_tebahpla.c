#include <stdio.h>
/**
 * main - prints the alphabet in lowercase in reverse,
 * followed by a new line.
 *
 * Return: Return 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a' ; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
