#include <stdio.h>

int fact(int n);

void main(void)
{
    int n, factorial;
    printf("Enter a number: ");
    scanf("%d", &n);

    factorial = fact(n);
    printf("factorial = %d\n", factorial);
}
int fact(int n)
{
    if(n == 1)
        return 1;
    else
        return n * fact(n - 1);
}