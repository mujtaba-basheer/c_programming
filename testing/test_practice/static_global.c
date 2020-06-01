#include <stdio.h>
int factorial(int n);
int main(void)
{
    printf("%d", factorial(4));
    printf("\n***BREAK***\n");
    printf("%d", factorial(3));
    return 0;
}
int factorial(int n)
{
    static int count;
    count++;
    printf("COUNT: %d\n", count);
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}