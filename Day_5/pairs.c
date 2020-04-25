#include <stdio.h>

void main(void)
{
    int i, j, k, l, count = 1;;

    for(i = 1; i <= 97; i++)
    {
        for(j = i + 1; j <= 98; j++)
        {
            for(k = j + 1; k <= 99; k++)
            {
                for (l = k + 1; l <= 100; l++)
                {
                    if(i + j + k == l)
                    {
                        printf("%d) %d + %d + %d = %d\n", count, i, j, k, l);
                        count++;

                        break;
                    }
                }
                
            }
        }
    }

    return;
}