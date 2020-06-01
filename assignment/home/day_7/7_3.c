#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
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
    printf("\n");
    int largest = a[0];
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
            j = i;
        }
    }
    int secondLargest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (i == j)
        {
            continue;
        }
        else if (a[i] > secondLargest)
        {
            secondLargest = a[i];
        }
    }
    printf("Largest element in the array is : \n");
    printf("%d\n", largest);
    printf("Second Largest element in the array is : \n");
    printf("%d\n", secondLargest);
    return 0;
}
