#include <stdio.h>

void display();

int main()
{
    static int n = 1;
    printf("%d ", n);
    n = 2;
    printf("%d ", n);
    n++;
    printf("%d\n", n);
    display();
    display();
    printf("\n");
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ", c);
}