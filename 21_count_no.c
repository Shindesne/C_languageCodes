#include <stdio.h>

int main()
{
    int no,r,count=0;
    printf("enter any number");
    scanf("%d",&no);
    while(no>0)
    {
        r=no%10;
        no=no/10;
        count ++;
    }
    printf("%d",count);
    }

