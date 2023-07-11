#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers.
 * @width: string to concatenate
 * @height: other string to concatenate
 *
 * Return: a pointer to a 2 dimensional array of integers. (Success),
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			free(g);
			for (j = 0; j < i; j++)
				free(g[j]);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}

	}
	return (g);
}
