#include <stdio.h>
int main()
{
    int a,*p;
    printf("enter the values");
    scanf("%d",&a);
    p=&a;
    printf("%d",a);
    printf("%d",*p);
    printf("%d",*p);
}

