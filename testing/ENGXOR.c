#include <stdio.h>

int is_even(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += (n % 2);
        n /= 2;
    }
    return (count % 2 == 0);
}

int main(void)
{
    int t, i, q, j, e, p, n, a;

    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &q);
        e = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%d", &a);
            if (is_even(a))
                e++;
        }
        for (j = 0; j < q; j++)
        {
            scanf("%d", &p);
            if (is_even(p))
                printf("%d %d\n", e, (n - e));
            else
                printf("%d %d\n", (n - e), e);
        }
    }

    return 0;
}