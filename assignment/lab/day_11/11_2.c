#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c1, r1, c2, r2;
    do
    {
        printf("Enter the number of rows in 1st matrix : \n");
        scanf("%d", &r1);
        printf("Enter the number of columns in 1st matrix : \n");
        scanf("%d", &c1);
        printf("Enter the number of rows in 2nd matrix : \n");
        scanf("%d", &r2);
        printf("Enter the number of columns in 2nd matrix : \n");
        scanf("%d", &c2);
    } while (c1 != r2);
    int *p1 = (int *)calloc(r1 * c1, sizeof(int));
    int *p2 = (int *)calloc(r2 * c2, sizeof(int));
    printf("Enter the elements in 1st matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", p1 + i * c1 + j);
        }
    }
    printf("Enter the elements in 2nd matrix : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", p2 + i * c2 + j);
        }
    }
    int *p3 = (int *)calloc(c1 * r2, sizeof(int));
    int k = 0;
    int c = 0;
    int s = 0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++, c = 0, s = 0)
        {
            for (c = 0; c < r2; c++)
            {
                s += (*(p1 + i * c1 + c)) * (*(p2 + c * c2 + j));
            }
            *(p3 + i * c2 + j) = s;
            s = 0;
        }
    }
    printf("Product :\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d", *(p3 + i * c2 + j));
        }
        printf("\n");
    }
    free(p1);
    free(p2);
    free(p3);
    return 0;
}
