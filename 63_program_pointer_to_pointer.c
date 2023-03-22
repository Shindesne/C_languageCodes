#include <stdio.h>
int main()
{
    int a=100;
    int*ptr;
    int**p1;
    ptr=&a;
    p1=&ptr;
    printf("%d",a);
    printf("%d",ptr);
    printf("%d",*ptr);
    printf("%d",p1);
    printf("%d",*p1);
    printf("%d",**p1);
}
