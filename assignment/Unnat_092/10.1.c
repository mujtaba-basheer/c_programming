#include <stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}


int main()
{
	int n1, n2;
	printf("\nEnter the numbers one by one:\n");
	scanf("%d",&n1);
	printf("\n");
	scanf("%d",&n2);
	int GCD=gcd(n1,n2);
	printf("\nThe GCD of the numbers given is:\t%d\n",GCD);
	return 0;
}

