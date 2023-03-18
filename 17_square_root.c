#include <stdio.h>

int main()
{
    int i,no;
    printf("enter the  value for no");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        if(i*i==no)
        {
            printf("sqrt root=%d",i);
            break;
        }
    }
}
