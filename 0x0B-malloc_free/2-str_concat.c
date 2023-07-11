#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success),
 * or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}
	for (j = i; j < len2 + i; j++)
	{
		c[j] = s2[j - i];
	}
	c[len1 + len2 + 1] = '\0';
	return (c);
}
