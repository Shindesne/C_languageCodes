#include <stdio.h>

int main()
{
    int i=1,no,sum=0;
    printf("enter the number");
    while(i<=4)
    {
        scanf("%d",&no);
        if(no%2 !=0)
        {
            continue;
        }
        sum=sum+no;
        i++;
    }
    printf("sum=%d",sum);
    }
    
