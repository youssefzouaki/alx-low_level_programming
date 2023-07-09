#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: should be 1
 * @argv: pointer to a string containe an amount of money.
 *
 * Return: 0 if argc equale 1
 * return 1 if argc not exactly 1
*/
int main(int argc, char *argv[])
{
	int sum, num, i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		puts("0\n");
	}
	else
	{
		num = atoi(argv[1]);
		sum = 0;
		for (i = 0; i < 5; i++)
		{
			sum += num / cents[i];
			num %= cents[i];
		}
		printf("%d\n", sum);
	}
	return (0);
}
