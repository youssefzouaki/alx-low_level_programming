#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded),
 * followed by a new line.
 * Return: 0
*/

int main(void)
{
	int m = 3, sum = 0;

	while (m < 1024)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
		sum + = m;
		}
	m++;
	}
	printf("%d\n", sum);

	return (0);
}
