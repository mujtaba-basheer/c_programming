#include <stdio.h>
#include <math.h>

// Function to calculate and display the roots of the equation

void calcRoot(float a, float b, float c) {
    float D, real, imaginary, root1, root2;

    // Calculating the Determinant
    D = pow(b, 2) - (4 * a * c);

    // When roots are real
    if(D > 0) {
        root1 = (pow(D, 0.5) - b) / (2 * a);
        root2 = (-pow(D, 0.5) - b) / (2 * a);
        printf("Root 1 is:\t%f\n", root1);
        printf("Root 2 is:\t%f\n", root2);
    }

    // When the roots are coincident
    else if(D == 0) {
        root1 = b / (2 * a) * -1;
        printf("Coincident root is:\t%f\n", root1);
    }

    // When roots are imaginary
    else {
        real = -b / (2 * a);
        D *= -1;
        imaginary = pow(D, 0.5) / (2 * a);
        
        if(real == 0) {
            printf("Root 1 is:\t+ %f i\n", imaginary);
            printf("Root 2 is:\t- %f i\n", imaginary);
        } else {
            printf("Root 1 is:\t%f + %f i\n", real, imaginary);
            printf("Root 2 is:\t%f - %f i\n", real, imaginary);
        }
    }
    return;
}

// Main function

void main() {
    float a, b, c;

    // Taking input of required values
    printf("Enter the following values...\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    // Calling function to calcualte and display the roots
    calcRoot(a, b, c);

    return;
}