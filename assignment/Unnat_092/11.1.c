#include<stdio.h>
#include<stdlib.h>

int main()
{
      int *a,n;
      printf("\nEnter the number of elements:\n");
      scanf("%d",&n);
      a=(int *)malloc(n *sizeof(int));
      printf("\nEnter the values: \n");
      int i,j,t;
      for(i=0;i<=n-1;i++)
      {
            scanf("%d", (a+i));
      }
      for(i=0;i<n;i++)
      {
            for(j=0;j<=i;j++)
            {
                  if(*(a+i)<*(a+j))
                  {
                        t=*(a+i);
                        *(a+i)=*(a+j);
                        *(a+j)=t;
                  }
            }
      }
      printf("\nSorted List:\n");
      for(i=0;i<n;i++)
      printf("\t%d",*(a+i));
      free(a);
      return 0;
}
