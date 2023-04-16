#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, sqr1, sqr2, sum;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    sqr1 = num1*num1;
    sqr2 = num2*num2;
    sum = sqr1 + sqr2;
    printf("Sum of their square = %d", sum);
    getch();
    return 0;
}
