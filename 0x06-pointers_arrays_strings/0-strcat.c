/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: pointer to a character
 * @src: pointer to a character
 *
 * Return: pointer to character
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;

	}

	*dest = '\0';
	dest = dest - i;

	return (dest);

}
