/**
 * _strncpy - is similar to the _strcat function,
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

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		j++;
	}
	while (j < n)
	{
		*dest = '\0';
		dest++;
		j++;
	}

	dest = dest - n;

	return (dest);
}
