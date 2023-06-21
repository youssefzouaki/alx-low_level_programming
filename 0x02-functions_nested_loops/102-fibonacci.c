#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 * Return: 0
*/

int main(void)
{
	int i;
	long int fibo, fibo1, fibo2;

	fibo = 1;
	fibo1 = 1;
	for (i = 0; i < 50 ; i++)
	{
		printf("%ld, ", fibo);
		fibo2 = fibo1;
		fibo1 = fibo;
		fibo = fibo1 + fibo2;
	}
	printf("\n");
	
	return (0);
}
