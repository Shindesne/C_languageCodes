#include<stdio.h>
#include<conio.h>
int main()
{
    int num, first, last, second, third, prod, sum;
    int rem, count=1, temp, tempcount=0;
    printf("Enter any four digit number: ");
    scanf("%d", &num);
    temp = num;
    while(temp>0)
    {
        tempcount++;
        temp = temp/10;
    }
    if(tempcount==4)
    {
        while(num>0)
        {
            rem = num%10;
            if(count==1)
                first = rem;
            else if(count==2)
                second = rem;
            else if(count==3)
                third = rem;
            else if(count==4)
                last = rem;
            num = num/10;
            count++;
        }
        sum = first+last;
        prod = second*third;
        printf("\nSum of first and last digit (%d + %d) = %d", last, first, sum);
        printf("\nProduct of mid digits (%d * %d) = %d", third, second, prod);
    }
    else
        printf("\nKindly enter only four digit number!!");
    getch();
    return 0;
}
