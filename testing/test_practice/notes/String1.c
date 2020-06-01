#include<string.h>
#include<stdio.h>
int main(void)
{
    char *ch, str[10];
    char *p = "SAB";
    printf("%s\n",p);
    strcpy(str, "SCB");
    printf("%d\n", strcmp(str, p));

    // strcpy(p, str);
    // printf("O/P: %s\n", p);

    ch = strchr(str, 'C');
    printf("The character:%c Rest of the string:%s\n", *ch, ch);
    ch = strstr(str, "CB");
    printf("The character:%c\n", *ch);
    return 0;
}
