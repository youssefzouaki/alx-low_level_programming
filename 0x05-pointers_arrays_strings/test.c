#include <stdio.h>
#include <math.h>

int main(void)
{
    char* s;
    char* s1;
    char* s2;
    int i, j, k, l, d, p;

    p = 1;
    i = 0;
    d = 0;

    s = "--+fg - f--+98fvf-565";
    s1 = s;
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
    printf("i = %d\nj = %d\n", i, j);
    printf("num = %d\n", d);
    return (0);
}
