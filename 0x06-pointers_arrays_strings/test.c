#include <stdio.h>

int main(void)
{
   
    int k, i, j, l, m, n, t;
      char *n1 = "998";
    char *n2 = "2";
    char *swp;
   char r[3];
   char swp2;

    printf("sizeof (r) = %ld\n", sizeof (r));
   t = 0;
   i = 0;
   j = 0;
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
    printf("i = %d\n", i);
    printf("j = %d\n", j);
   if (i <= j)
	{
		l = i;
        m = j;
		swp = n1;
		n1 = n2;
        n2 = swp;
	}
	else
	{
		l = j;
        m = i;
	}

	for ( k = 0; k <= l; k++)
	{
		r[k] = (n1[i] + n2[j] - 96) % 10 + 48 + t;
		t = (n1[i] + n2[j] - 96) / 10;
		i--;
        j--;
	}
    for ( k = l + 1 ; k <= m ; k++)
	{
		r[k] = (n1[i] + t - 48) % 10 + 48;
		t = (n1[i] + t - 48) / 10;
		i--;
	}

    while (r[n] != '\0')
    {
        n++;
    }
	for (i = 0; i < n / 2; i++)
	{
		swp2 = *(r + i);
		*(r + i) = *(r + n - i - 1);
		*(r + n - i - 1) = swp2;
	}
    printf("%s + %s = %s\n", n1, n2, r);
    printf("n = %d\n", n);



    return (0);
}
