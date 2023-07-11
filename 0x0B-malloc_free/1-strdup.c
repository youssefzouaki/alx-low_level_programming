#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 *
 * Return: NULL if str = NULL
 * On success, returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, len;

	i = 0;
	len = 0;

	while (str[len])
	{
		len++;
	}
	p = (char *) malloc(sizeof(char) * (len + 1));	

	if (p == NULL)
		return (NULL);

	for ( i = 0; i < len; i++)
	{
		p[i] = str[i];
	}

	return (p);
	
	
}
