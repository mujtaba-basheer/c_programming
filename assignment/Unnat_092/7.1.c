#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>

double* solve(int arr[],int n);

int main()
{
    int n,option;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array :\n");
    for(int k=0; k<n; k++)
        scanf("%d",&arr[k]);
    double *res=solve(arr,n);
    printf("Enter 1 for Max array element\n");
    printf("Enter 2 for Min array element\n");
    printf("Enter 3 for Avg of array\n");
    printf("Enter 4 for Standard Deviation \n");
    printf("Enter any key to terminate program\n\n");
    bool flag=true;
    while(flag)
    {
        printf("Enter your choice : ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
        {
            printf("Max element is --> %d \n",(int)res[0]);
            break;
        }
        case 2:
        {
            printf("Min element is --> %d \n",(int)res[1]);
            break;
        }
        case 3:
        {
            printf("Average  --> %lf \n",res[2]);
            break;
        }
        case 4:
        {
            printf("Standard Deviation --> %lf \n",res[3]);
            break;
        }
        default:
            flag=false;
        }
    }
    free(res);
    return 0;
}
double* solve(int arr[],int n)
{
    int max,min,sum;
    min=(int)(pow(2,31));
    max=-(int)(pow(2,31))-1;
    double* res=(double*)calloc(4,sizeof(double));
    double dif=0.0;
    sum=0;
    for(int k=0; k<n; k++)
    {
        sum+=arr[k];
        if(arr[k]>max)
            max=arr[k];
        if(arr[k]<min)
            min=arr[k];
    }
    res[0]=max;
    res[1]=min;
    res[2]=(double)sum/n;

    for(int k=0; k<n; k++)
        dif+=pow((arr[k]-res[2]),2);

    res[3]=(double)sqrt(dif/n);
    return res;
}