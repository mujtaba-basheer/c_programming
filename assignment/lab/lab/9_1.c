#include <stdio.h>

#define MAX 100

int comp(char *p, char *q)
{
    int i, flag = 0;
    for (i = 0; p[i], q[i] != '\0'; i++)
    {
        if (*(p + i) != *(q + i))
            flag = -1;
    }
    return flag;
}

char *concat(char *p, char *q)
{
    int l1, l2, s, i, j;

    // calculating lengths of strings
    for (l1 = 0; p[l1] != '\0'; l1++);
    for (l2 = 0; q[l2] != '\0'; l2++);

    s = l1 + l2;

    if (MAX >= s)
    {
        for (j = 0, i = l1; q[j] != '\0'; i++, j++)
        {
            p[i] = q[j];
        }

        return p;
    }
}

int palin(char *p, int len)
{
    int i, j, flag = 1;
    for (i = 0, j = len - 1; i <= (len / 2); i++, j--)
    {
        if (p[i] != p[j])
            flag = 0;
        break;
    }
    return flag;
}
int main()
{
    char str1[MAX], str2[MAX];
    char *m, ch;
    int s, ch1, l1, i, p;
    printf("Enter the 1st string\n");
    gets(str1);
    printf("Enter the 2nd string\n");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
        ;
    l1 = i;

    printf("Enter the character\n");
    printf("a => Compare\nb => Concat\nc => Check for Palindrome\n");
    do
    {
        ch = getchar();

        switch (ch)
        {
        case 'a':
            s = comp(str1, str2);

            if (s == 0)
                printf("\n Strings are equal\n");
            else
                printf("\n Strings are unequal\n");
            break;

        case 'b':
            m = concat(str1, str2);
            puts(m);
            break;

        case 'c':
            p = palin(str1, l1);
            if (p == 1)
                printf("Given string is a palindrome\n");
            else
                printf("Given string is not a palindrome\n");
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("Enter again?\n");
        fflush(stdin);
        ch1 = getchar();
        if (ch1 == 'y' || ch1 == 'Y')
            printf("Again invalid choice\n");
        ch = getchar();
    } while (ch1 == 'y' || ch1 == 'Y');
    return 0;
}