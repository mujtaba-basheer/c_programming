#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3] = {{0, 1}, {2, 3}, {5, 6}}, **b, i, j;
    b = (int **)calloc(3, sizeof(int *));
    for (i = 0; i < 3; i++)
    {
        b[i] = (int *)calloc(3, sizeof(int));
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = (i + 1) * (j + 1);
        }
    }
    printf("%d %d %d %d\n", *(*a + 4), **a + 4, *(*b + 4), **b + 4);
    printf("%d %d %d %d\n", *(a[2] - 2), **(a + 2), *(b[2] - 2), **(b + 2));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 3 4 0 5
// 3 5 33 3