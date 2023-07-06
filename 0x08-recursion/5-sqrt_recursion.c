#include "main.h"
/**
 * test_sqrt_recursion - calcul the natural square root of n
 * @n: integer
 * @q: integer
 *
 * Return: value of square root of n.
 */
int test_sqrt_recursion(int n , int q)
{
    if ( q * q > n)
	{
		return (-1);
	}
	if ( q * q == n)
	{
		return (q);
	}

	return (test_sqrt_recursion (n, q + 1));
}
/**
 * _sqrt_recursion - calcul the natural square root of n
 * @n: integer
 *
 * Return: value of square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	
	return (test_sqrt_recursion(n, 0));
}
