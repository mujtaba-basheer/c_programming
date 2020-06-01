#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100], p = '0', temp[100];
    char* r = &p;
    int i = 0, j = 0, len;
    printf("Please enter the list of lines : \n");
    char str[100];
    gets(str);
    printf("Please enter the string you want to check present in the above lines : \n");
    gets(ar);
    printf("The lines which contains the given string are as follows :\n");
    len = strlen(str);
    while(i < len)
    {
        if(str[i] == '.' || str[i] == '?' || str[i] == '!' || i == len - 1) //to check the presence of lines
        {
            temp[j] = str[i];
            temp[j + 1] = '\0';
            j = 0;
            r = strstr(temp, ar);
            if(r != NULL)
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
