#include <stdio.h>

int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            if((i==0)&&(j%2==1))
            {
            printf("  *");
        }
        else if((i==1)&&(j%2==0))
        {
            printf("*  ");
        }
        else if(((i==2)&&(j==0))||((i==2)&&(j==4)))
        {
            printf("*   ");
        }
        else if(((i==3)&&(j==0))||((i==3)&&(j==4)))
        {
            printf("  *");
        }
        else if((i==4)&&(j==2))
        {
            printf("    *");
        }
        }
        printf("\n");
    }
}
        
