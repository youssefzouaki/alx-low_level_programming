/**
 * _strcmp - compares two strings.
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: an integre.
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	cmp = - *s2;
	else if (*s1 != '\0' && *s2 == '\0')
	cmp = *s1;
	else
	cmp = *s1 - *s2;

	return (cmp);
}
