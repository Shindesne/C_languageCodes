#include <stdio.h>

int main()
{
    int i,n=5,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" ");
        }
            n--;
            for(k=1;k<=i;k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        int m=1;
        for(i=1;i<=5;i++)
        {
        printf(" ");
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }
        m++;
        for(k=4;k>=i;k--)
        {
            printf("* ");
        }
        printf("\n");
        }
    }

