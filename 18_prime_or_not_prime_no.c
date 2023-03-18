#include <stdio.h>

int main()
{
   int no,i;
   printf("enter the values for no");
   scanf("%d",&no);
   for(i=2;i<=no;i++)
   {
       if(no%i==0)
       {
           if(no==i)
           {
               printf("prime no");
           }
           else
           {
               printf("not prime no");
           }
           break;
       }      
           }
           }
    
