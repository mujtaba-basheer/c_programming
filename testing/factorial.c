#include <stdio.h>

void main(void)
{
    int f = 1, c, i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        f *= i;
        if(f < 0)
        {
            printf("Integer overflow occured at i = %d\n", i);

            // Exiting the program with return
            return;
        }
    }

    printf("Factorial is: %d\n", f);
    return;
}