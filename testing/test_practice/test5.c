#include <stdio.h>
#include <stdlib.h>
void man(int a[])
{
    a[2] = 7;
}
int main()
{
   int arr[] = {1, 2, 3};
   man(arr);
   printf("%d\n", arr[2]);
}
