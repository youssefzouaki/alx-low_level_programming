#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, n;
	char *arr;

	if(argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if(n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char*)main;
	for (i = 0; i < n - 1; i++)
		printf("%02hhx ", arr[i]);
	printf("%02hhx\n", arr[n - 1]);

	return (0);
}
