#include <stdio.h>

void findDifference(int a[], int n)
{
    int i, el;

    printf("First differences:\t");
    for(i = 0; i < n - 1; i++)
    {
        el = a[i + 1] - a[i];
        printf("%d ", el);
        a[i] = el;
    }
    printf("\n");

    printf("Second differences:\t");
    for(i = 0; i < n - 2; i++)
    {
        el = a[i + 1] - a[i];
        printf("%d ", el);
        a[i] = el;
    }
    printf("\n");

    printf("Third differences:\t");
    for(i = 0; i < n - 3; i++)
    {
        el = a[i + 1] - a[i];
        printf("%d ", el);
        a[i] = el;
    }
    printf("\n");

    return;
}

void main(void)
{
    int n, i;

    printf("Enter the number of elements(n > 3): ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the numbers:\t");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    findDifference(a, n);

    return;
}