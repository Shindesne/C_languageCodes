#include <stdio.h>
#include <stdlib.h>
   int main()
   {
       int n,*ptr,sum=0,i,*p;
       printf("enter the size of array");
       scanf("%d",&n);
       ptr=(int*)malloc(n*sizeof (int));
       p=ptr;
       if(ptr==NULL)
       {
           printf("error");
           exit(0);
       }
           printf("enter the elements of array");
           for(i=1;i<=n;i++)
           {
               scanf("%d",ptr);
               sum=sum+*ptr;
               ptr++;
           }
           printf("array elements");
           for(i=1;i<=n;i++)
           {
               printf("%d",n);
               p++;
           }
           printf("Addition=%d",sum);
       }
   
