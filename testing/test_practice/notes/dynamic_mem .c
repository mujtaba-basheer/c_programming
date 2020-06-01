#include<stdlib.h>
#include<stdio.h>

// 3 many rows we are going to create
int column[] = {2, 3, 4};
int ** create()
{
    int i, j;
    int **p = (int **)malloc(sizeof(int *) * 3);
    for(i = 0; i < 3; i++)
    {
        *(p + i) = (int *)malloc(sizeof(int) * column[i]);
        for(j = 0; j < column[i]; j++)
            *(*(p + i) + j) = rand() % 10;
    }
    return p;
}

int main(void)
{
    int i, j;
    int **ptr = create();
    for(i = 0 ; i < 3; i++)
    {
        for(j = 0; j < column[i]; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        free(ptr[i]);
        printf("\n");
    }
    free(ptr);
    return 0;
}
