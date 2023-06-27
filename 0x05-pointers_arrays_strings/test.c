#include <stdio.h>
#include <math.h>

int main(void)
{
    char* s;
    s = "";
    printf("s0 = %c\ns1 = %c\ns2 = %c\n", *s, *(s+1), *(s+2));
    return (0);
}
