#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*ptr,sum=0,i,*p,*q;
       printf("enter the size of array");
       scanf("%d",&n);
       ptr=(int*)malloc(n*sizeof (int));
       p=ptr;
       printf("memory allocated %u",ptr);
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
               printf("%d",*p);
               p++;
           }
           printf("Addition=%d",sum);
           printf("enter new size for array");
           scanf("%d",&n);
           ptr=(int *)realloc(ptr,n*sizeof(int));
           if(ptr==NULL)
           {
               printf("error");
               exit(0);
           }
           printf("reallocated memory %u",ptr);
           q=ptr;
           printf("enter elements");
           scanf("%d",&n);
           for(i=1;i<=n;i++)
           {
               scanf("%d",ptr);
               sum=sum+*ptr;
               ptr++;
           }
           printf("elements are");
           for(i=1;i<=n;i++)
           {
               printf("%d",*q);
               q++;
           }
           printf("%d",sum);
}
           
