#include <stdio.h>
int Orthogonal(int n, int a[20][20])
{
    int prod[n][n], i, j, k, sum;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += (a[i][k] * a[j][k]);
            }
            if (i != j && sum != 0)
                return 0;
            if (i == j && sum != 1)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int rows, column, i, j;
    printf("Enter the rows of the matrix : ");
    scanf("%d", &rows);
    printf("Enter the column of the matrix : ");
    scanf("%d", &column);
    printf("Enter the elements of the matrix \n");
    int a[20][20];
    for (i = 0; i < rows; i++)
    {
        printf("Enter the elements for row %d\n", i + 1);
        for (j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
    }
    if (rows != column)
        printf("The matrix is not orthogonal\n");
    else
    {
        if (Orthogonal(rows, a))
        {
            printf("The matrix is orthogonal\n");
        }
        else
        {
            printf("The matrix is not orthogonal\n");
        }
    }
}
