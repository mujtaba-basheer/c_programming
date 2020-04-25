#include <stdio.h>
#include <math.h>

// function to check if a number is a perfect square
int isPerfectSq(int num)
{
    int isSquare = 0;

    double root = sqrt(num);
    isSquare = ((root - floor(root)) == 0) ? 1 : 0;

    return isSquare;
}

void main(void)
{
    float r;
    int maxR, i, c = 0, sq;

    // taking input of r
    printf("Enter the value of r: ");
    scanf("%f", &r);

    // maxR is the maximum interger value x or y can take
    maxR = floor(r);

    // checking for all integer values of x/y within range
    for(i = -maxR; i <= maxR; i++)
    {
        sq = (r * r - i * i);
        if(isPerfectSq(sq) == 1)
        {
            // adding 2 as square of sq can be +ve as well as -ve
            c += 2;
        }
    }
    // subtracting 2 as both +ve and -ve 0 was counted
    c = (c == 0) ? 0 : c - 2;

    printf("Number of integer coordinates: %d\n", c);
}
