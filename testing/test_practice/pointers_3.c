#include <stdio.h>

void main()
{
    int b = 2;
    printf("b = %d\n", b);
    int *a = &b;
    scanf("%d", a);
    printf("b = %d\n", b);
}