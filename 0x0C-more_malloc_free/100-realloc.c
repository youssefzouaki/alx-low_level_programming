#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p, *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_p = malloc(new_size);
	if (!new_p)
		return (NULL);

	old_p = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_p[i] = old_p[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_p[i] = old_p[i];
	}
	free(ptr);
	return (new_p);
}
