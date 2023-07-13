#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: size of mount memory
 * @s2: 
 * @n: 
 *
 * Return: pointer shall point to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated, or
 * NULL if  the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n > len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = len1; i < len1 + n; i++)
		s[i] = s2[i - len1];
	s[len1 + n] = '\0';
	return (s);
}
