#include <stdio.h>
int factorial(int n);
int count = 10;
int main(void)
{
    printf("%d", factorial(4));
    printf("\n %d \n", count);
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

// COUNT: 1
// COUNT: 2
// COUNT: 3
// COUNT: 4
// COUNT: 5
// 24
//  10 
// COUNT: 6
// COUNT: 7
// COUNT: 8
// COUNT: 9