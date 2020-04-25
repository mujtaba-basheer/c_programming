#include <stdio.h>

void main(void) {
    float number;
    int num;

    // Taking assigning value to 'number'
    number = 34.5678;

    // Printing original number
    printf("Original number: %f\n", number);

    // Printing rounded-off values
    num = (int)(number + 0.5);
    printf("Number rounded off to nearest integer: %d\n", num);
    printf("Number rounded off to two decimal places: %.2f\n", number);
}