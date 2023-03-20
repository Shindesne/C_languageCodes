#include <stdio.h>
void swap(int *,int *,int*);
void swap(int *a,int*b,int*c)
{
    int t;
    printf("before swap %d%d%d\n",*a,*b*,c);
    t=*a;
    *a=*b;
    *b=*c;
    *c=t;
    printf("after swap %d%d%d\n",*a,*b,*c);
}
int main()
{
    int x,y,z;
    printf("enter 3 values");
    scanf("%d%d%d",&x,&y,&z);
    swap(&x,&y,&z);
}
