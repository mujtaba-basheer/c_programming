#include<stdio.h>
#include<stdlib.h>

# define MAX 100
int comp(char*p,char*q)
{
    int i,flag=-1,count=0;
    for(i=0;p[i],q[i]!='\0';i++)
    {
        if(*(p+i)==*(q+i))
        {
            count++;
        }
        else
            return flag;
    }
    if(count==i)
        flag=0;
    return flag;
    
}

char* concat(char*p,char*q)
{
   int l1,l2,s,i,j;
   
   for(l1=0;p[l1]!='\0';l1++);
   for(l2=0;q[l2]!='\0';l2++); 
   s=l1+l2;
    
   if(MAX>=s)
   {
       for(j=0,i=l1;q[j]!='\0';i++,j++)
       {
           p[i]=q[j];
       }
       
    return p;
   }
}

int palin(char*p,int len)
{
    int i,j, flag=1;
    for(i=0;i<=(len/2);i++)
    {
        if(p[i]!=p[len-i-1])
            flag=0;
            break;
    }
 return flag;
}
int main()
{
    char str1[MAX],str2[MAX];
    char*m,ch;
    char chh='y';
    int s,l1,i,p;
    printf("Enter the first string\n");
    gets(str1);
    printf("Enter the second string\n");
    gets(str2);
    
    for(i=0;str1[i]!='\0';i++);
        l1=i;
        
    
    printf("Enter 'a' to COMPARE\n");
    printf("Enter 'b' to CONCATENATE\n");
    printf("Enter 'c' to check PALINDROME nature\n");
   
    
      ch=getchar();
          
    switch(ch)
    {
       case 'a':s=comp(str1,str2);
    
    if(s==0)
        printf("\n Strings are equal\n");
    else
        printf("\n Strings are unequal\n");
        break;
    
       case 'b':m=concat(str1,str2);
               puts(m);
               break;
       
       case 'c':p=palin(str1,l1);
                if(p==1)
                printf("First string is a palindrome\n");
                else
                printf("First string is not a palindrome\n");
                break;
                
                p=palin(str2,l1);
                if(p==1)
                printf("Second string is a palindrome\n");
                else
                printf("Second  string is not a palindrome\n");
                break;
       default:printf("Wrong choice\n");
                break;
    }
     return 0;
}

    
 
   
