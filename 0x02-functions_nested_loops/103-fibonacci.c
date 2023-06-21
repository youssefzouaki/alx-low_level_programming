#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms,
 * of  Fibonacci sequence whose values do not exceed 4,000,000,
 * followed by a new line.
 * Return: 0
*/
int main(void)
{
	long int fibo, fibo1, fibo2, sum;

	fibo = 1;
	fibo1 = 1;
	sum = 0;
	while (fibo < 4000000)
	{
		fibo2 = fibo1;
		fibo1 = fibo;
		fibo = fibo1 + fibo2;
		if (fibo % 2 == 0)
		sum += fibo;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
