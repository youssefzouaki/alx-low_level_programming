/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer to a string
 *
 * Return: pointer to a string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	
	while (*str != '\0')
	{
		if (*str <= 'z' && *str >= 'a')
		*str = *str - 32;
		str++;
		i++;
	}
	return (str - i);
	
}
