#include <stdio.h>

int result(int c, int d);

void main(void)
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = result(a, b);
    printf("Sum = %d\n", sum);

}
int result(int n1, int n2)
{
    return (n1 + n2);
}