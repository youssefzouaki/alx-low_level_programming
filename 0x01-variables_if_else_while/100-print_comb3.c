#include <stdio.h>
/**
 * main - prints all  possible different combinations of two digits,
 * followed by a new line.
 *
 * Return: Return 0
 */
int main(void)
{
	int l;
	int i;

	for (l = 48; l < 58 ; l++)
	{
		for (i = l+1; i < 58; i++)
		{
			putchar(l);
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
