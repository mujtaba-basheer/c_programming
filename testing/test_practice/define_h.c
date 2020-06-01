#include <stdio.h>
#define array_length(arr) (sizeof(arr) == 0 ? 0 : sizeof(arr) / sizeof(arr[0]))

void main(void)
{
    int a[] = {1, 2, 3, 4};
    long b = 0;
    printf("%d\n", array_length(a));
    printf("%d\n", sizeof(b));
}