#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line. exept q and e
 *
 * Return: Return 0
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
