#include <stdio.h>
int fact(int);
int fact(int n)
{
    int p=1;
    if(n==1)
    {
        return 1;
    }
    else
    {
        p=n*fact(n-1);
        return p;
    }
    }
int main()
{
    int f,x;
    printf("enter the values of no");
    scanf("%d",&f);
    x=fact(f);
    printf("factorial=%d",x);
}
