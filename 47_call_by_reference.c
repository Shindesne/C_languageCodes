#include <stdio.h>
void swap(int *);
void swap(int *a)
{
    int b=10,c;
    c=*a+b;
    printf("%d",c);
}
int main()
{
    int i=10;
    swap (&i);
}
