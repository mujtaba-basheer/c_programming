#include <stdio.h>

void main(void)
{
    int i = 0;

    for(; i < 30; i++)
    {
        switch(i)
        {
            case 0: i += 5;
            case 12:
            case 17: i += 5;
            case 14: i += 2;
            default: i += 4;
            break;
        }
        printf("%d\t", i);
    }

    return;
}