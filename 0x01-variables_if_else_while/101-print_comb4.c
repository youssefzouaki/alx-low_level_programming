#include <stdio.h>
/**
 * main - prints all  possible different combinations of three digits,
 *
 * Return: Return 0
 */
int main(void)
{
	int l, i, j;

	for (l = 48; l < 56 ; l++)
	{
		for (i = l + 1; i < 57; i++)
		{
			for (j = i + 1; j < 58; j++)
			{
				putchar(l);
				putchar(i);
				putchar(j);
				if (l != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
