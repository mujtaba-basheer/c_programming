#include<stdio.h>
#include<stdlib.h>
int** transpose (int row, int column, int A[][column] );
int main()
{
    int row,column;
    printf("Enter dimensions(row * column) : ");
    scanf("%d%d",&row,&column);
    int A[row][column];
    printf("Enter elements of matrix  :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("The  given matrix is :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    
    int** AT=transpose(row,column,A);
    printf("The Transpose of given matrix is :\n");
    for(int i=0; i<column; i++)
    {
        for(int j=0; j<row; j++)
            printf("%d ",*(*(AT+i)+j));
        printf("\n");
    }
return 0;
}
int** transpose(int row,int column,int A[][column] )
{
    int** a_trans=(int**)calloc(column,sizeof(int*));
     for(int k=0; k<column; k++)
        *(a_trans+k)=(int*)calloc(row,sizeof(int));
    for(int i=0; i<column; i++)
    {
        for(int j=0; j<row; j++)
           *(*(a_trans+i)+j)=A[j][i];
    }
    return a_trans;
}
