#include <stdio.h>

int main()
{
    int Ar[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&Ar[i]);
        sum=sum+Ar[i];
    }
        printf("%d",sum);
    }
