//#include<string.h>
#include<stdio.h>
int main(void)
{
    char ch, str[10];
    int i = 0;
    printf("enter string:");
    //scanf("%s", str);
    gets(str);
    /*while(1)
    {
        ch = getchar();
        if(ch == '\n')
            break;
        str[i] = ch;
        i++;
    }*/
    //str[i] = '\0';
    printf("The string\n");
    printf("%s\n", str);
    //puts(str);
    return 0;
}
