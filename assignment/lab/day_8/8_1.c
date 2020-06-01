#include <stdio.h>

int **transpose(int row, int column, int A[][column]);

int main()
{
    int row, column;
    printf("Enter row and column of matrix: ");
    scanf("%d %d", &row, &column);
    int A[row][column];

    printf("Enter elements of matrix  :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("The Transpose of the matrix is :\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
            printf("%d ", *(*(AT + i) + j));
        printf("\n");
    }
    return 0;
}
int **transpose(int row, int column, int A[][column])
{
    int **AT = (int **)calloc(column, sizeof(int *));
    for (int k = 0; k < column; k++)
        *(AT + k) = (int *)calloc(row, sizeof(int));
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
            *(*(AT + i) + j) = A[j][i];
    }

    return AT;
}