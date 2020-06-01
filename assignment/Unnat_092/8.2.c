#include<stdio.h>
#include<stdlib.h>
int** add (int row, int column, int A[] [column],int B[][column]);
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the dimensions of the matrix 1 :\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the dimensions of the matrix 2 :\n");
    scanf("%d%d",&r2,&c2);
    int A[r1][c1];
    int B[r2][c2];
    if(c1==c2 && r1==r2)
    {
        printf("Input matrix 1 elements :\n");
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("Input matrix 2 elements :\n");
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                scanf("%d",&B[i][j]);
            }
        }
        int** sum=add(r1,c1,A,B);
        printf("The Sum of given matrix is :\n");
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
                printf("%d ",*(*(sum+i)+j));
            printf("\n");
        }
    }
    else
        printf("Addition not possible");
    return 0;
}
int** add (int row, int column, int A[][column],int B[][column])
{
    int** sum=(int**)calloc(row,sizeof(int*));
    for(int k=0; k<row; k++)
        *(sum+k)=(int*)calloc(column,sizeof(int));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
            *(*(sum+i)+j)=A[i][j]+B[i][j];
    }
    return sum;
}


