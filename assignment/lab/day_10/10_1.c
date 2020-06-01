#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while (a != b)
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

void main()
{
    int n1, n2;
    printf("\nEnter the numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    int GCD = gcd(n1, n2);
    printf("\nThe GCD of the given numbers is:\t%d\n", GCD);
    return;
}
