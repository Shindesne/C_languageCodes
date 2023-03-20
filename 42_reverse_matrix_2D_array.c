#include <stdio.h>

int main()
{
   int a[3][3],i,j;
   printf("enter the value");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   printf("matrix a\n");
   for(i=2;i>=0;i--)
   {
       for(j=2;j>=0;j--);
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
       
       }
   }

