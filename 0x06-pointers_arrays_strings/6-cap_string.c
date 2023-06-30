/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to a string
 *
 * Return: pointer to a string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	if (*str <= 'z' && *str >= 'a')
	{
		*str = *str - 32;
		str++;
		i++;
	}

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' || *str == ';' || *str == '.' || *str == '(' || *str == ')' || *str == '{' || *str == '}' || *str == '!' || *str == '?' || *str == '"')
		{
			str++;
			i++;
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 32;
				str++;
				i++;
			}
		}
		else
		{
			str++;
			i++;
		}
	}
	return (str - i);

}
