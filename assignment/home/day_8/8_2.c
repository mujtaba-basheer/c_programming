#include <stdio.h>
int isLowerTri(int X[][10], int n)
{
    int i, j, f = 1;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
            if (X[i][j] != 0)
            {
                f = 0;
            }
        if (f == 0)
            break;
    }
    return f;
}

int isUpperTri(int X[][10], int n)
{
    int i, j, f = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
            if (X[i][j] != 0)
            {
                f = 0;
            }
        if (f == 0)
            break;
    }
    return f;
}
int main()
{
    int n, A[10][10], i, j;
    printf("Enter the number of rows/columns of the square matrix : ");
    scanf("%d", &n);
    printf("Enter the matrix elements : \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf(isUpperTri(A, n) ? "Matrix is Upper Triangular and " : "Matrix is not Upper Triangular and ");
    printf(isLowerTri(A, n) ? "\nMatrix is Lower Triangular " : "\nMatrix is not Lower Triangular");
}
