#include <stdio.h>

int main()
{
    int a,b,c,tot,avg;
    printf("enter the value");
    scanf("%d%d%d",&a,&b,&c);
    tot=a+b+c; 
    printf("total-%d\n",tot); 
    avg-tot/3;
    printf("average=%d\n",avg);
    if(avg>75)
  {
    printf("first class");
  }
    else if(avg>45&&avg<=60)
  {
     printf("second class");
  }
    else if (avg>356&avg<=45)
 {
    printf("third class");
  }
    else
  {
    printf("fail");
  }
  
}

