#include <stdio.h>
/**
 * positive_or_negative - states whether
 * it is positive, negative, or zero
 *
 * Return: Always 0.
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
