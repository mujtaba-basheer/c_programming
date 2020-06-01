#include <stdio.h>

void main(void)
{
    int arr[] = {-8, 2, 3, 9, 5 };
    int *pa = arr;
    int size1 = sizeof(*pa);
    int size2 = sizeof(pa);

    printf("%d\n", size1);  // 4
    printf("%d\n", size2);  // 8

    printf("%d\n", *(pa + 3));  // a[0 + 3] => 9
    printf("%d\n", (*pa + 3));  // -8 + 3 => -5
}