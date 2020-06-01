#include <stdio.h>

void main(void)
{
    int *a  = 1;
    printf("%d\n", a);  // 1
    printf("%d\n", *a); // segmenttaion fault
}