/**
 * _strcmp - compares two strings.
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: an integre.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
