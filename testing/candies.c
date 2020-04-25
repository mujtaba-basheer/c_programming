#include <stdio.h>
#include <math.h>

void main(void)
{
    int t, i, n, result;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        result = (n - 1) / 2;
        printf("%d\n", result);
    }
}