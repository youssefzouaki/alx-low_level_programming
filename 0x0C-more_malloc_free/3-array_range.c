#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (!a)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		a[i] = min + i;

	return (a);
}
