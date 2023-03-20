#include <stdio.h>
void sum(int);
void sum(int a)
{
    int b=10,c;
    c=a+b;
    printf("%d",c);
}
int main()
{
    int i=10;
    sum(i);
}
