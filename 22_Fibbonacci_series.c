#include <stdio.h>

int main()
{
    int a=0,b=1,c=0,i=0,n;
    printf("enter the value");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
        i++;
    }
}
        
