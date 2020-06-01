#include <stdio.h>

extern int a = 3, b = 7;

void main(void)
{
    printf("a = %d\n", a);
    b = 5;
    printf("b = %d\n", b);
}