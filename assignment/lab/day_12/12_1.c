#include <stdio.h>

int findMinMax(int A[], int n)
{

    int max, i, min;

    max = A[0];
    min = A[0];

    for (i = 0; i < n; i++)
    {

        if (min > A[i])
        {
            min = A[i];
        }

        if (max < A[i])
        {
            max = A[i];
        }
    }

    printf("MAX value: %d", max);
    printf("MIN value: %d", min);

    return 0;
}

int main()
{

    int i, n, M[10];

    printf("Enter total number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &M[i]);
    }

    findMinMax(M, n);
}