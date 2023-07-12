#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: pointer to array of size ac
 *
 * Return:  a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, len;

	k = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
		}
		len += j + 1;
	}
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
