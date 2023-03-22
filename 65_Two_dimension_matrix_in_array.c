#include <stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int *p[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p[i][j]=&a[i][j];
        }
    }
    printf("matrix are \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",*p[i][i]);
        }
        printf("\n");
    }
}
        
