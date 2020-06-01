#include <stdio.h>
#include <string.h>
int main()
{
    char *q, b[10] = "C Quiz";
    q = b + 2;
    *q = 'A';
    printf("%s\n", b);
    printf("%s\n", q);
    printf("%s %d\n", strstr(q, "i"), strlen(strchr(q, 'u')));
    return 0;
}

// C Auiz
// Auiz
// iz 3