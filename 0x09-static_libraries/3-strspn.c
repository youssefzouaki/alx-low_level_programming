/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the memory area
 * @accept: pointer to a string
 *
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				i++;
				break;
			}
			accept++;
			j++;
		}
	if (*accept == '\0')
	{
		break;
	}
	accept -= j;
	s++;
	}
	return (i);
}
