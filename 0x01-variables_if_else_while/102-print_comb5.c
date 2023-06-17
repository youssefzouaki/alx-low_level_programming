#include <stdio.h>
/**
 * main - prints all  possible different combinations of two two digits,
 *
 * Return: Return 0
 */
int main(void)
{
	int l, i, j, k;

	for (l = 48; l < 58 ; l++)
	{
		for (i = 48; i < 57; i++)
		{
			for (j = l; j < 58; j++)
			{
				for (k = 48; k < 58; k++)
				{
					if ((j != l) || (k >= i + 1))
					{
						putchar(l);
						putchar(i);
						putchar(' ');
						putchar(j);
						putchar(k);
						if ((l != 57) || (i != 56) || (j != 57) || (k != 57))
							{
							putchar(',');
							putchar(' ');
							}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
