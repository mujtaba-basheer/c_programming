#include <stdio.h>

void main(void)
{
    long num, sum = 0, revNum = 0, tempNum, noOfDigits = 0;

    // taking input of number
    printf("Enter the number: ");
    scanf("%lu", &num);

    tempNum = num;
    while(tempNum > 0)
    {
        // incrementing noOfDigits by 1
        noOfDigits += 1;

        // adding last digit of tempNum to sum
        sum += (tempNum % 10);

        // forming reverse number by adding preious digits in the beginning
        revNum = (revNum * 10) + (tempNum % 10);

        // eliminating last digit from tempNum
        tempNum /= 10;
    }

    // printing number of digits of num
    printf("Number of digits: %lu\n", noOfDigits);

    // printing sum of digits of num
    printf("Sum of digits: %lu\n", sum);
    
    // checking for palindrome and printing result accordingly
    if(revNum == num)
    {
        printf("%lu is a Palindrome Number\n", num);
    }
    else
    {
        printf("%lu is not a Palindrome Number\n", num);
    }
    
}