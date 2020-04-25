#include <stdio.h>

void main(void)
{
    int num, i;
    long fact = 1;

    // taking input of number
    printf("Enter a number: ");
    scanf("%d", &num);

    // calculating factorial of the number
    for(i = 1; i <= num; i++)
    {
        fact *= i;
    }

    // printing the factorial
    printf("Factorial is: %lu\n", fact);

    return;
}