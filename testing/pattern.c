#include <stdio.h>

void main(void)
{
    int n, j;
    float mid, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    mid = (float)(n - 1) / 2;

    // printing upper triangle

    i = 0;
    while(i <= mid)
    {
        j = 0;
        while(j < n)
        {
            if(j <= (mid - i) || j >= (mid + i))
                printf("*");
            else
                printf(" ");
            j ++;
        }
        printf("\n");
        i ++;
    }

    // printing lower triangle

    i = mid - (n % 2);
    while(i >= 0)
    {
        j = 0;
        while(j < n)
        {
            if(j <= (mid - i) || j >= (mid + i))
                printf("*");
            else
                printf(" ");
            j ++;
        }
        printf("\n");
        i --;
    }

    return;
}