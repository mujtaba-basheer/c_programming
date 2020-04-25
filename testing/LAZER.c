#include <stdio.h>

int main(void)
{
    int t, i, j, q, n, x1, x2, y, k, count;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        scanf("%d", &q);
        int a[n];

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (j = 0; j < q; j++)
        {
            scanf("%d", &x1);
            scanf("%d", &x2);
            scanf("%d", &y);
            x1 --; x2 --;
            count = 0;

            for (k = x1; k < x2; k++)
            {
                if ((a[k] <= y && y < a[k + 1]) || (a[k] >= y && y > a[k + 1]) || (a[k] < y && y <= a[k + 1]) || (a[k] > y && y >= a[k + 1]))
                    count++;
            }

            printf("%d\n", count);
        }
    }

    return 0;
}