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

	i = 0;

	while (*haystack != '\0')
	{
	while (needle[i] != '\0' && haystack[i] != '\0')
	{
		if (haystack[i] != needle[i])
		{
			haystack += i + 1;
			i = 0;
			break;
		}
		i++;
	}
	if (needle[i] == '\0')
	{
		break;
	}
	}
	if (needle[i] != '\0')
	{
		haystack = 0;
	}

	return (haystack);
}
