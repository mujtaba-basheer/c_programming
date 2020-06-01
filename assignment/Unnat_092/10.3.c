#include<stdio.h> 

int main() 
{ 
   int num,x; 
   
   printf("Enter the number: "); 
   scanf("%d",&num); 
   
   x=reverse(num); 
   printf("Reverse of the number is: %d",x); 
   
   return 0; 
} 


int reverse(int num) 
{ 
   
   static int sum,r; 
   
   if(num) 
   { 
     r=num%10; 
     sum=sum*10+r; 
     int n=(int)num/10;
     reverse(n); 
   } 
   else 
     return 0; 
   return sum; 
}
