#include <stdio.h>
#include "main.h"

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143,
 * followed by a new line.
 * Return: 0
*/

int main(void)
{
   unsigned int num, i, lfact;

	num = 1231952;

	/**
	 * Divide the number by 2
	 * until it's no longer divisible by 2
	*/

	while (num % 2 == 0)
	{
		lfact = 2;
		num /= 2;
	}

	/**
	 * Check for odd prime factors
	*/

	for ( i = 3; i < num; i += 2)
	{
		while (num % i == 0)
		{
			if (isPrime(num))
			{
				lfact = i;
				num /= i;
			}
		}
	}

	/**
	 * print the largest prime factor
	*/

	printf("%lu", lfact);

	return (0);
}
