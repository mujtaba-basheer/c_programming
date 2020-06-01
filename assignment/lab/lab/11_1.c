#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, j, temp;
    int *a;
    printf(" Input number of elements in the array(1 to 100): ");
    scanf("%d", &n);
    a = (int *)calloc(n, sizeof(int));
    if (a == NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    printf("\n");
    printf(" Input array %d : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    printf("\n Array after sorting : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
}
