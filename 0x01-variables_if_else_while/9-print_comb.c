#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers,
 * followed by a new line.
 *
 * Return: Return 0
 */
int main(void)
{
	int l;

	for (l = 48; l < 58 ; l++)
	{
		putchar(l);
		if (l != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
