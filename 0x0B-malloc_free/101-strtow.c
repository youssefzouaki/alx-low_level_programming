#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: pointer to array of size ac
 *
 * Return:  a pointer to a new string, or NULL if it fails
*/

char **strtow(char *str)
{
	char **s, *t;
	int i, j, h, k, len, start, end;

	h = 0;
	k = 0;

	while (str[i])
	{
		j = 0;
		while (str[i] != ' ' && str[i])
		{
			i++;
			j++;
		}
		if (j)
			h++;
		
		if (str[i] == '\0')
		{
			len = i;
			break;
		}
		i++;
	}
	len = i;
	if (h == 0)
		return (NULL);
	s = malloc(h * sizeof(char *) );
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < len; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
		if (j)
		{
			end = i;
			t = malloc((j + 1) * sizeof(char));
			if (t == NULL)
				return (NULL);

			while (start < end)
				*t++ = str[start++];

			*t = '\0';
			s[k] = t - j;
			k++;
			j = 0;
		}
	}
	else if (j++ == 0)
		start = i;
	}
	s[k] = NULL;
	return (s);

}
