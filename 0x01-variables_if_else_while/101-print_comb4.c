#include <stdio.h>
/**
 * main - prints all  possible different combinations of three digits,
 * Numbers must be separated by ',', followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Return 0
 */
int main(void)
{
	int l, i, j;

	for (l = 48; l < 56 ; l++)
	{
		for (i = l+1; i < 57; i++)
		{
			for (j = i+1; j < 58; j++)
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
