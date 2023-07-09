#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: should be 1
 * @argv: pointer to a string containe an amount of money.
 *
 * Return: 0 (sucess), 1 (error)
*/
int main(int argc, char *argv[])
{
	int sum, num, i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	num = atoi(argv[1]);
	sum = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

		for (i = 0; i < 5; i++)
		{
			if (num >= cents[i])
			{
			sum += num / cents[i];
			num %= cents[i];
			}
		}
		printf("%d\n", sum);
	return (0);
}
