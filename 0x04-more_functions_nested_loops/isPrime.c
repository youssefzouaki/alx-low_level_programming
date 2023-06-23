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
