#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op)(int, int);

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if(!op)
	{
		printf("Error\n");
		exit(99);
	}
	if((op == op_div || op == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op(a, b);
	printf("%d\n", result);

	return (0);

}
