#include <stdio.h>

void main(void)
{
    int marks;
    char grade;

    // Taking input of marks
    printf("Enter your marks (Out of 100): ");
    scanf("%d", &marks);

    // Using ternary operater to assign the grade
    grade = (marks > 89) ? 'O' : (marks > 79 ? 'E' : (marks > 69 ? 'A' : (marks > 59 ? 'B' : (marks > 49 ? 'C' : (marks > 39 ? 'D' : 'F')))));

    // Checking for out of range marks
    grade = marks > 100 || marks < 0 ? 'I' : grade;

    // Printing the final grade
    printf("Your Grade: %c \n", grade);

    return;
}