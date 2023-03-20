#include <stdio.h>
void swap(int,int);
void swap(int a,int b)
{
    int t;
    printf("before fun call %d%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("after run call %d%d\n",a,b);
}
int main()
{
    int x,y;
    printf("enter two values");
    scanf("%d%d",&x,&y);
    swap(x,y);
}
