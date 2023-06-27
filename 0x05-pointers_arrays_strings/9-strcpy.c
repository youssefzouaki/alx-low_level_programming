#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 * Return: painter to dest.
*/

char *_strcpy(char *dest, char *src)
{
	char *s;
	int i;

	i = 0;
	s = src;
	do {
		dest[i] = *src;
		src++;
		i++;
	} while (*src != '\0');
	if (i == 1)
	dest[0] = "";
	dest[i] = '\0';

	return (s);
}
