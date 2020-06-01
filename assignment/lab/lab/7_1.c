#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function declarations
void max(float *a);
void min(float *a);
void average(float *a);
void stndev(float *a);
void all(float *a);

int n;

int main()
{
    int i;
    printf("Enter length of array.\n");
    scanf("%d", &n);
    float arr[n];
    printf("Enter the numbers.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        printf("Next\n");
    }
    printf("Chose an option:\n");
    printf("1.\tFind the maximum.\n2.\tFind the minimum.");
    printf("\n3.\tFind the average.\n4.\tFind the standard deviation.");
    printf("\n5.\tFind all of the above.\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        max(arr);
        break;

    case 2:
        min(arr);
        break;

    case 3:
        average(arr);
        break;

    case 4:
        stndev(arr);
        break;
    case 5:
        all(arr);
        break;

    default:
        printf("ERROR: This option is not programmed.");
        break;
    }

    return 0;
}

void max(float *a)
{
    int i;
    float max;
    for (i = 0; i < n; i++)
    {
        max = (max < *(a + i)) ? *(a + i) : max;
    }
    printf("\nMaximum Value is:\t%f", max);
}

void min(float *a)
{
    int i;
    float min;
    for (i = 0; i < n; i++)
    {
        min = (min > *(a + i)) ? *(a + i) : min;
    }
    printf("\nMaximum Value is:\t%f", min);
}

void average(float *a)
{
    int i;
    float average, sum;
    for (i = 0; i < n; i++)
    {
        sum += (*(a + i));
    }
    printf("\nAverage Value is:\t%f", (average / n));
}

void stndev(float *a)
{
    int i;
    float std1, std2;
    for (i = 0; i < n; i++)
    {
        std1 += (*(a + i)) * (*(a + i));
        std2 += (*(a + i));
    }
    printf("\nStandard Deviation around mean is:\t%f", ((1 / n)) * (sqrt(n * std1 - std2 * std2)));
}

void all(float *a)
{
    max(a);
    min(a);
    average(a);
    stndev(a);
}