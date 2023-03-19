#include <stdio.h>

int main()
{
    int i,no,sum=0;
    printf("enter the number");
    for(i=1;i<=4;i++)
    {
        scanf("%d",&no);
        if(no<0)
        {
            break;
        }
        sum=sum+no;
    }
    printf("sum=%d",sum);
}
    

