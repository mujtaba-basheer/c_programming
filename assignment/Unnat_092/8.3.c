#include <stdio.h>
#include<stdlib.h>

typedef struct citytemp
{
  char city_name[20];
  int temp[7];
  float avgtemp;
}ct;

int main(void)
{
  int i,j;
  ct a[5];
  
  //inputs city name and temperature
  for(i=0;i<5;i++)
  {
    printf("Enter %d city name: ", i+1);
    gets(a[i].city_name);
    int s=0;
    for(j=0;j<7;j++)
    {
      printf(" Enter the temperature of day %d: ", j+1);
      scanf("%d", &a[i].temp[j]);
      s=s+a[i].temp[j];
    }
    a[i].avgtemp = s/7.0;
    getchar();
  }
  
  //Ordering the array in order of >>increasing average temperature
  for(i=0;i<4;i++)
  {
    if(a[i].avgtemp>a[i+1].avgtemp)
    {
      int d = a[i].avgtemp;//average temperature swapping
      a[i].avgtemp = a[i+1].avgtemp;
      a[i+1].avgtemp = d;
      //city name swapping
      for(j=0;j<20;j++)
      {
        char t = a[i].city_name[j];
        a[i].city_name[j]= a[i+1].city_name[j];
        a[i+1].city_name[j] = t;
      }
    }
  }
  
  //printing city name and average temperature upto in increasing order
  printf("City name \t Avg.temp.\n ");
  for(i=0;i<5;i++)
  {
    printf("%s \t %f", a[i].city_name, a[i].avgtemp);
  }
  return 0;
}