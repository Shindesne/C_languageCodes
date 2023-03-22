#include <stdio.h>
int main()
{
  int a[3]={10,20,30};
  int *p[3],i;
  for(i=0;i<3;i++)
  {
      p[i]=&a[i];
  }
  printf("elements of  the  array are");
  for(i=0;i<3;i++)
  {
      printf("%d\t",*p[i]);
  }
  }

