/**
 * _atoi - convert a string to an integer.
 * @s: pointer to a character
 * 
 * Return: an integre
*/

int _atoi(char *s)
{
	int i, j, k, l, p, d;
	char* s1;
	char* s2;

	s1 = s;
	j = 0;
	i = 0;
	p = 1;
	d = 0;


	while (*s1 < '0' || *s1 > '9')
	{
		if (*s1 == '-')
		i++;
		s1++;

	}
	s2 = s1;
	while (*s2 >= '0' && *s2 <= '9')
	{
		s2++;
		j++;
	}

	for (k = 0; k < j; k++)
	{
		for (l = 1; l < j - k; l++)
		{
			p *= 10;
		}
		d += (*(s1 + k) - 48) * p;
		p = 1;
	}
	if (i % 2 != 0)
	d *= -1;

	return (d);

}
