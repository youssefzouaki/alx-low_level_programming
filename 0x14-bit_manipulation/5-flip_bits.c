#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > 64)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (get_bit(n, i) != get_bit(m, i))
			j++;
	}
	return (j);
}
