#include<stdio.h>
#include<stdlib.h>
int** mul(int r1,int c1,int c2,int a[][c1],int b[][c2]);
int main()
{
	int r1,r2,c1,c2,i,j,**m;
	printf(" Enter the no. of row and columns of matrix A: \n");
	scanf("%d%d",&r1,&c1);
	printf(" Enter the no. of row and columns of matrix B: \n");
	scanf("%d%d",&r2,&c2);
	int a[r1][c1];
	int b[r2][c2];
	if(c1!=r2)
		printf("Invalid Multiplication matrix");
	else
	{
		printf(" Enter matrix a elements\n");
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf(" Enter matrix b elements\n");
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		m=mul(r1,c1,c2,a,b);
		printf(" The multiplication of the give matrices is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				printf("%2d ",m[i][j]);
			printf("\n");
		}
	}
	return 0;
}
int** mul(int r1,int c1,int c2,int a[][c1],int b[][c2])
{
	int i,j,k,sum=0,**m;
	m=(int**)malloc(c2*sizeof(int*));
	for(i=0;i<r1;i++)
		m[i]=(int*)malloc(sizeof(int));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				sum+=a[i][k]*b[k][j];
				m[i][j]=sum;
			}
			sum=0;
		}
	}
	return m;
}
