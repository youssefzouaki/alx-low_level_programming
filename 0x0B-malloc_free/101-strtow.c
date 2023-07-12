#include <stdlib.h>
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * strtow - splits a string into words.
 * @str: pointer to array of size ac
 *
 * Return:  a pointer to a new string, or NULL if it fails
*/
char **strtow(char *str)
{
	char **s, *t;
	int i, j, h = 0, k = 0, len = 0, start, end;

	while (*(str + len))
		len++;
	h = count_word (str);
	if (h == 0)
		return (NULL);
	s = malloc((h + 1) * sizeof(char *) );
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
