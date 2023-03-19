#include <stdio.h>
int main()
{
    int i=1,no,sum=0;
    printf("enter the number");
    do
    {i++;
    scanf("%d",&no);
    if(no<0)
    {
        exit(0);
    }
    sum=sum+no;
    }
    while(i<=10);
    printf("sum=%d",sum);
}
    
