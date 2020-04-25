#include <stdio.h>

void printComplex(int r, int i)
{
    char sign = '+';
    if(i == 0)
        printf("%d\n", r);
    else
    {
        if(i < 0)
        {
            sign = '-';
            i *= -1;
        }

        printf("%d %c i%d\n", r, sign, i);
    }
}

void add(int a[], int b[])
{
    int real, img;
    real = a[0] + b[0];
    img = a[1] + b[1];
    printComplex(real, img);
}

void subtract(int a[], int b[])
{
    int real, img;
    real = a[0] - b[0];
    img = a[1] - b[1];
    printComplex(real, img);
}

void multiply(int a[], int b[])
{
    int real, img;
    real = a[0] * b[0] - a[1] * b[1];
    img = a[0] * b[1] + a[1] * b[0];
    printComplex(real, img);
}

int main(void)
{
    int choice = 1, a[2], b[2];
    while(choice != 4)
    {
        printf("1. Addition\t2. Subtraction\t3. Multiplication\t4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 3)
        {
            printf("Enter first complex number:");
            scanf("%d %d", &a[0], &a[1]);

            printf("Enter second complex number:");
            scanf("%d %d", &b[0], &b[1]);

            switch(choice)
            {
                case 1:
                add(a, b);
                break;

                case 2:
                subtract(a, b);
                break;

                case 3:
                multiply(a, b);
                break;
            }
        }
        else if(choice < 1 || choice > 4)
            printf("Please enter a valid choice!\n");

        printf("\n");
    }

    return 21;
}
