#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, num, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num);
        sum = sum+num;
    }
    printf("\nSum of all %d numbers = %d", n, sum);
    getch();
    return 0;
}
