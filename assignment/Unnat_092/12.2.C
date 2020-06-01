
#include <stdio.h>
#include <stdlib.h>


struct student
{
    int rno;
    char name[20];
    int mp;
    int mc;
    int mm;
    int total;
};


int main()
{
    int n,i,j,min;
    
    i=0;
    
    printf("Enter the total number of students\n");
    scanf("%d",&n);
    
    struct student temp;
    struct student *p=(struct student*)malloc(n*sizeof(struct student));
    
    do
    {
		++i;
        printf("Enter the Roll Number\n");
        scanf("%d",&p[i].rno);
        
        printf("\n\t\tEnter the Name(only first name)\n\t\t");
        scanf("%s",p[i].name);
        
        printf("\n\t\t\tEnter the marks of physics\n\t\t\t");
        scanf("%d",&p[i].mp);
        
        printf("\n\t\t\tEnter the marks of chemistry\n\t\t\t");
        scanf("%d",&p[i].mc);
        
        printf("\n\t\t\tEnter the marks of maths\n\t\t\t");
        scanf("%d",&p[i].mm);
        
        p[i].total=p[i].mp+p[i].mm+p[i].mc;
    
    }while(i<n);
    
    
    for(i=n;i>0;i--)
    {
        min=0;
        
        for(j=0;j<i;j++)
        {
            if(p[min].total>p[j].total)
            {
                min=j;
            }
        }
        
        temp = p[j-1];
        p[j-1] = p[min];
        p[min] = temp;
    }
    
    
    for(i=0;i<n;i++)
    {
        printf("Student #:\t%d\n", i + 1);
        printf("%d\n", p[i].rno);
        printf("\t%s\n", p[i].name);
        printf("\t%d\n", p[i].total);
    }
    
    free(p);
    return 0;
}

