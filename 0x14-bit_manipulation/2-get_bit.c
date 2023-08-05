#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 0, bit, temp;

	temp = n;
	if (n == 0 || n == 1)
	{
		return (n & 1);
	}

	while ((temp >> 1) > 0 && j != index)
		j++;

	if (j == index)
	{
		bit = (temp >> j) & 1;
		return (bit);
	}
	else
		return (-1);
}
