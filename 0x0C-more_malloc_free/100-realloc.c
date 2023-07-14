#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: ptr if new_size == old_size, or Null if
 * new_size is equal to zero, and ptr is not NULL.
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
