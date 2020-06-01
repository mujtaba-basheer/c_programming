#include <stdio.h>

float average(int arr[], int n)
{
    static int count;
    if(count == n)
    {
        return (1.000000 * arr[count - 1] / n);
    }
    else if(count == 0)
    {
        count++;
        return average(arr, n);
    }
    else
    {
        arr[count] += arr[count - 1];
        count++;
        return average(arr, n);
    }
}
void main()
{
    int a[] = {1, 2, 3, 4};
    float avrg = average(a, 4);
    printf("%f\n", avrg);
}