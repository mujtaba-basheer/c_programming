#include <stdio.h>

extern int a;

void main(void)
{
    a = 3;
    printf("n = %d\n", a);
}