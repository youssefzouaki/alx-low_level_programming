#include <stdio.h>

int main(void)
{
	char a[6][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};
	char (*b)[8];
	int i, j;

	i = 0;
	b = a;

	while (b[i][j] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			putchar(b[i][j]);
		}
		putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
