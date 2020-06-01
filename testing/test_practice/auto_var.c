#include <stdio.h>

void main()
{
    auto int a = 1;
    printf("a after initialization = %d\n", a);
    {
        a = 5;
        printf("a after modification = %d\n", a);
        auto int b = 2;
        printf("b after initialization = %d\n", b);
    }
    printf("b outside block = %d\n", b);
}