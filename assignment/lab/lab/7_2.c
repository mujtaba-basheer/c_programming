#include <stdio.h>
#include <stdbool.h>
static int index = 0;

int main()
{
    int n, choice, arr[100];
    bool flag = true;
    printf("Enter array size : ");
    scanf("%d", &n);
    printf("Enter array elements :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[index++]);
    printf("Array formed :\n");
    printArr(arr);
    while (flag)
    {
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("Any other key to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int pos, x;
            printf("Enter Index  and Element\n");
            scanf("%d %d", &pos, &x);
            insert(arr, n, pos, x);
            break;
        }
        case 2:
        {
            int pos;
            printf("Enter index to delete :\n");
            scanf("%d", &pos);
            delete (arr, n, pos);
            break;
        }
        default:
            flag = false;
        }
    }
    return 0;
}
void insert(int A[], int n, int pos, int x)
{
    int k = index++;
    while (k > pos)
    {
        A[k] = A[k - 1];
        k--;
    }
    A[pos] = x;
    printf("Array after transformation :\n");
    printArr(A);
}
void delete (int A[], int n, int pos)
{
    if (index > 0 && pos < index)
    {
        int k = pos;
        index--;
        while (k < index)
        {
            A[k] = A[k + 1];
            k++;
        }
        printf("Array after transformation :\n");
        printArr(A);
    }
    else
        printf("No elements to delete\n");
}
void printArr(int A[])
{
    for (int k = 0; k < index; k++)
        printf("%d ", A[k]);
    printf("\n");
}