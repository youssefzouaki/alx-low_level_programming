/**
 * _memcpy - copies memory area.
 * @dest: pointer to the memory area
 * @src: pointer to the memory area
 * @n: the first n bytes of the memory area
 *
 * Return: pointer to the memory area s.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
