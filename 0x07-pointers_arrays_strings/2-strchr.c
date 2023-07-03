/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string s
 * @c: the character c
 *
 * Return: pointer to the first occurrence of
 * the character c in the string s, or
 * NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		break;
		else
		s++;
	}
	if (*s == '\0')
	{
		s = 0;
	}
	
	return (s);
}
