#include <stdio.h>

int main()
{
   int i,no,sum=0;
   printf("enter any value");
   scanf("%d",&no);
   i=1;
   do
   {
       sum=sum+i;
       i++;
   }
   while(i<=no);
   printf("sum of series=%d",sum);
}
   

