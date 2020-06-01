#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void histFreq(char arr[])
{
    int i, j, c = 0;
    for (i = 0; i < 26; i++)
    {
        for (j = 0; arr[j] != '\0'; j++)
        {
            if (arr[j] == 65 + i || arr[j] == 97 + i)
                c++;
        }
        if (c != 0)
            printf("The character %c is repeated %d times in the array\n", 65 + i, c);
        c = 0;
    }
}
int main()
{
    int n, i, j, count;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    gets();
    char arr[n];
    printf("Enter the array elements : \n");
    fflush(stdin);
    gets(arr);
    histFreq(arr);
    return 0;
}
