/**
 * infinite_add - adds two numbers.
 * @n1: number 1
 * @n2: number 2
 * @r: is the buffer that the function will use to store the result
 * @size_r:  is the buffer size
 *
 * Return: pointer to the result
 * return 0 If the result can not be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, t;
	char *swp;
	char swp1, swp2;

	i = 0;
	j = 0;
	t = 0;
	n = 0;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	i--;
	j--;
   if (i <= j)
	{
		swp1 = i;
		i = j;
		j = swp1;

		swp = n1;
		n1 = n2;
		n2 = swp;
	}
		m = i;
		l = j;

	for ( k = 0; k <= l; k++)
	{
		r[k] = (n1[i] + n2[j] - 96) % 10 + 48 + t;
		t = (n1[i] + n2[j] - 96) / 10;
		i--;
		j--;
	}

	for ( k = l + 1 ; k <= m; k++)
	{
		r[k] = (n1[i] + t - 48) % 10 + 48;
		t = (n1[i] + t - 48) / 10;
		i--;
	}
	while (r[n] != '\0')
	{
		n++;
	}
	if (size_r <= n)
		return (0);
	for (i = 0; i < n / 2; i++)
	{
		swp2 = *(r + i);
		*(r + i) = *(r + n - i - 1);
		*(r + n - i - 1) = swp2;
	}
	return (r);

}
