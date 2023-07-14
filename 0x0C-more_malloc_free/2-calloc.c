#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: an array of nmemb elements.
 * @size: size bytes of each elements.
 *
 * Return: pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb * size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	p = ptr;
	for (i = 0; i < size * nmemb; i++)
		p[i] = 0;

	return (ptr);
}
