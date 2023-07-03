/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string s
 * @accept: pointer to the string
 *
 * Return: the byte in s that matches one of the bytes in accept, or
 * NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			break;
		}
		if (accept[i] != '\0')
			break;
		s++;
	}

	if (*s == '\0')
	{
		s = 0;
	}

	return (s);
}
