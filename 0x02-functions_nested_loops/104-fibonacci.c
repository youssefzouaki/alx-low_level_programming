#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 * Return: 0
*/

int main(void)
{
	int i;
	unsigned long fibo, fibo1, fibo2;

	fibo = 1;
	fibo1 = 1;
	for (i = 1; i < 97 ; i++)
	{
		printf("%lu, ", fibo);
		fibo2 = fibo1;
		fibo1 = fibo;
		fibo = fibo1 + fibo2;
	}
	printf("%lu", fibo);
	printf("\n");

	return (0);
}
