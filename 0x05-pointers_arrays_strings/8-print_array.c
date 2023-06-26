#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to an integre.
 * @n: integre
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for ( i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + n-1));

}
