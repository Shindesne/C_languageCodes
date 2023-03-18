#include <stdio.h>

int main()
{
    int i=1,n,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    do
    {
        fact=fact*i;
        i++;
    }
    while(i<=n);
    }
    
