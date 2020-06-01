#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    int r;
    printf("Enter the value of r : \n");
    scanf("%d", &r);
    if (n >= r)
    {
        int f = factorial(n) / (factorial(n - r) * factorial(r));
        printf("The value of nCr is : %d\n", f);
    }
    else
    {
        printf("Out of bounds input!\n");
    }
}
