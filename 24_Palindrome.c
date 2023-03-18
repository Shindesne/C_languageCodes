#include <stdio.h>

int main()
{
    int no,r=0,temp;
    printf("enter the no");
    scanf("%d",&no);
    temp=no;
    do
    {
        r=r*10;
        r=r+no%10;
        no=no/10;
    }
    while(no>0);
    if(temp==r)
    {
        printf("number is paindrome");
    }
    else
    {
        printf("number is not paindrome");}
}

