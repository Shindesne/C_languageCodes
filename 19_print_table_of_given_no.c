#include <stdio.h>

int main()
{
    int no,i,table=1;
    printf("enter the value for no");
    scanf("%d",&no);
    for(i=1;i<=10;i++)
    {
        table=no*i;
        printf("%d\n",table);
    }
}
