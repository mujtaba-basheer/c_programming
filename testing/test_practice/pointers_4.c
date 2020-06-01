#include <stdio.h>

void print(int *p, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");
}
int* update(int *p, int n)
{
    int i;
    int arr[5] = { 1, 2, 3, 4, 5 };
    print(arr, 5);
    for(i = 0; i < n; i++)
        *(p + i) = *(p + i) + 10;
    return arr; // 1000
}
void main(void)
{
    int A[4] = { 1, 2, 3, 4 };
    int *ptr = update(A, 4);
    print(A, 4);
    print(ptr, 5);
}