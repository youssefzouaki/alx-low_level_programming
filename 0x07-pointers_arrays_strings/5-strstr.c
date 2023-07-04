/**
 * _strstr - locates a substring.
 * @aystack: pointer to a string
 * @needle: pointer to the substring
 *
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			break;
		}
		haystack++;
	}

	if (*haystack == '\0')
	{
		return 0;
	}

	for (i = 1; needle[i] != '\0'; i++)
	{
		if (haystack[i] != needle[i])
		{
			haystack++;
			break;
		}
	}

	if (needle[i] == '\0')
	{
		return (haystack);
	}

	return (_strstr(haystack, needle));
}
