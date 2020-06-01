#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100], p = '0', temp[100];
    char *r = &p;
    int i = 0, j = 0, len;
    printf("Enter the list of lines : \n");
    char str[100];
    gets(str);

    printf("Enter string to check : \n");
    gets(arr);
    
    printf("The following lines contains the given string :\n");
    len = strlen(str);
    while (i < len)
    {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!' || i == len - 1)
        {
            temp[j] = str[i];
            temp[j + 1] = '\0';
            j = 0;
            r = strstr(temp, arr);
            if (r != NULL)
            {
                printf("%s", temp);
                printf("\n");
            }
        }
        else
        {
            temp[j] = str[i];
            j++;
        }
        i++;
    }
    return 0;
}