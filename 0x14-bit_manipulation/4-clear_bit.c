#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, bit, p = 1;

	if (index > 64)
		return (-1);

	bit = (*n >> index) & 1;
	if (bit)
	{
	for (i = 0; i < index; i++)
		p *= 2;

	*n -= p;
	}

	return (1);
}
