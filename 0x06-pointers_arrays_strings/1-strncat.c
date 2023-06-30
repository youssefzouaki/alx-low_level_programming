#include "main.h"

/**
 * _strncat - is similar to the _strcat function,
 * except that:
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if
 * it contains n or more bytes
 * @dest: pointer to a character
 * @src: pointer to a character
 * @n: an integre
 *
 * Return: pointer to a character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	while (j < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
		j++;

	}

	*dest = '\0';
	dest = dest - i;

	return (dest);
}
