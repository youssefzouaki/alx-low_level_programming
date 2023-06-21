#include <stdio.h>
/**
 * main - 
 * Return: 0
*/

int main(void)
{
    int m = 3, sum = 0;

    while (m < 1024)
    {
        if (m % 3 == 0 || m % 5 == 0)
       {
        sum+=m;
       }
       m++;
    }
    printf("sum = %d\n", sum);

    return (0);
}
