#include<stdio.h>

void decToHex(int n){
    int hex = 0;
    if(!n)
        return;
    else {
        hex = n % 16;
        decToHex(n / 16);
    }
    if(hex > 9)
        printf("%c",'A'+(hex-10));
    else
        printf("%d", hex);
    }

int main()
{
    int num = 0;
    printf("Enter number: ");
    scanf("%d",&num);
    decToHex(num);
    printf("\n");

    return 0;
}