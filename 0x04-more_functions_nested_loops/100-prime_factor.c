#include <stdio.h>

/**
 * isPrime - check if a number is prime.
 * @num: the number
 * Return: 1 if a number is prime,
 * or 0 is a number isn't
*/

int isPrime(unsigned long num)
{
	unsigned long i;

	if (num <= 2)
	return (1);

	for (i = 3; i * i < num; i++)
	{
		if (num % i == 0)
			return (0);

	}
	return (1);

}

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143,
 * followed by a new line.
 * Return: 0
*/

int main(void)
{
   unsigned long num, i, lfact;

	num = 612852475143;

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

	printf("%lu\n", lfact);

	return (0);
}
