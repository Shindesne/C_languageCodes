#include <stdio.h>

int main()
{
    int a,b,*p,*q,c;
    printf("enter the no");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    c=*p;
    *p=*q;
    *q=c;
    printf("after swaping result is=%d%d",*p,*q);
}

