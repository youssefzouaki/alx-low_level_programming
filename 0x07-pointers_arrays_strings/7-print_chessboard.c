#include "main.h"

/**
 * print_chessboard - check the code
 * @a: pointer to an array of characters
 *
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (a[i][j] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
