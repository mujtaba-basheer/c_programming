#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[10];
    int roll;
    int mark;
}s;

void max(s *p, int n);

int main(void)
{
    int i;
    struct student temp;
    s *ptr = (s *)malloc(sizeof(s) * 5);
    printf("Size of each memory slot:%d\n", sizeof(temp));
    for(i = 0; i < 5; i++)
    {
        printf("Student name:");
        gets(ptr[i].name);
        printf("Roll:");
        scanf("%d", &ptr[i].roll);
        printf("Marks:");
        scanf("%d", &(ptr + i)->mark);
        getchar();
    }
    max(ptr, 5);
    free(ptr);
    return 0;
}

void max(s *p, int n)
{
    int t = p[0].mark;
    int index = 0, i;
    for(i = 1; i < n; i++)
    {
        if((p + i)->mark > t)
        {
            t = (p + i)->mark;
            index = i;
        }
    }
    printf("Highest marks obtained by :%s, %d, %d", (p + index)->name, (p + index)->roll, p[index].mark);
}
