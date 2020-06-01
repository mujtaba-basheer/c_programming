#include <stdio.h>
#include <stdlib.h>
void fib(int n1, int n2, int i, int n)
{
	int t;
	printf("%d",n1);
	t=n1;
	n1=n2;
	n2=t+n1;
	if(i==n)
		printf("\n");
	else
	{
		printf(", ");
		fib(n1,n2,(++i),n);
	}
}

int main()
{
	int n;
	printf("Enter the number of terms :\n\n");
	scanf("%d",&n);
	fib(0,1,1,n);
	return 0;
}
