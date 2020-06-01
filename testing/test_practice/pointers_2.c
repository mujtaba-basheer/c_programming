#include <stdio.h>

void main(void)
{
    int b = 1, c = 3;
    int *a  = &b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    a = 2;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    *a = c;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}