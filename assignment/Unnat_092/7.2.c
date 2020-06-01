#include<stdio.h>
#include<stdbool.h>
static int index=0;
int main()
{
    int n,choice,A[100];
    bool flag=true;
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    printf("Enter the Elements of Array :\n");
    for(int k=0; k<n; k++)
        scanf("%d",&A[index++]);
    printf("Array formed :\n");
    print(A,n);
    while(flag)
    {
        printf("Enter 1 to insert an element\n");
        printf("Enter 2 to delete an element\n");
        printf("Enter any other key to end program\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            int pos,x;
            printf("Enter Index  and Element\n");
            scanf("%d%d",&pos,&x);
            insert(A,n,pos,x);
            break;
        }
        case 2:
        {
            int pos;
            printf("Enter index to delete :\n");
            scanf("%d",&pos);
            delete(A,n,pos);
            break;
        }
        default:
            flag=false;
        }
    }
    return 0;
}
void insert(int A[],int n,int pos,int x)
{
    int k=index++;
    while(k>pos)
    {
        A[k]=A[k-1];
        k--;
    }
    A[pos]=x;
    printf("Array has changed to :\n");
    print(A);
}
void delete(int A[],int n,int pos )
{
    if(index>0 && pos<index)
    {
        int k=pos;
        index--;
        while(k<index)
        {
            A[k]=A[k+1];
            k++;
        }
        printf("Array has changed to :\n");
        print(A);
    }
    else
        printf("Delete Unsuccessful :Wrong Index input\n");
}
void print(int A[])
{
    for(int k=0; k<index; k++)
        printf("%d ",A[k]);
    printf("\n");
}
