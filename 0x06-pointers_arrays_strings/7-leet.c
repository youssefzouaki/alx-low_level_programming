/**
 * leet - encodes a string into 1337.
 * @s: pointer to a string
 *
 * Return: pointer to a string
 */

char *leet(char *s)
{
	int i;

	i = 0;
	
	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'T' || *s == 't')
			*s = '7';
		else if (*s == 'O' || *s == 'o')
			*s = '0';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'l' || *s == 'L')
		{
			*s = '1';
		}

			s++;
			i++;

	}
	s = s - i;

	return (s);
	
}
