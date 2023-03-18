#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the values for a,b,c,d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is greatest");
            }
            else
            {
                printf("d is greatest");
            }
        }
        else
        {
            if(c<d)
            {
                printf("c is greatest");
            }
            else
            {
                printf("d is greatest");
            }
        }
    }
        else
        {
            if(b>c)
            {
                if(b>d)
                {
                    printf("b is gratest");
                }
                else
                {
                    printf("d is gratest");
                }
            }
            else
            {
                if(c>d)
                {
                    printf("c is greatest");
                }
                else
                {
                    printf("d is greatest");
                }
            }
        }
}
                
