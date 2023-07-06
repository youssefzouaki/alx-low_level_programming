#include "main.h"
/**
 * test_is_prime_number - test it is prime
 * @n: integer
 * @i: integer
 *
 * Return: 1 if n is prime 0 else
 */
int test_is_prime_number(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i >= n / 2)
	{
		return (1);
	}

	return (test_is_prime_number(n, i + 2));
}
/**
 * is_prime_number - it is prime
 * @n: integer
 *
 * Return: 1 if n is prime. 0 else.
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n <= 1 || n % 2 == 0)
	{
		return (0);
	}
	return (test_is_prime_number(n, 3));

}
