#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
		}
		else
		return (0);
	}
	return (result);

}
