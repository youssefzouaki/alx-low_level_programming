#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string.
 * 
 * Return: nothing
*/

void rev_string(char *s)
{
	int i, len, swp;
	char* str;

	str = s;
	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for ( i = len - 1; i > len/2; i--)
	{
	swp = *(s + i);
	*(s + i) = *(s + len - i - 1);
	*(s + len - i - 1) = swp;
	}

}
