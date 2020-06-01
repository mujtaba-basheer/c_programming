#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array elements are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int p = a[0];
    for (int i = 1; i < n; i++)
    {
        p ^= a[i];
    }
    printf("\nThe element in the array that occurs only once is : ");
    printf("%d\n", p);
    return 0;
}
