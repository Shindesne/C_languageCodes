#include<stdio.h>
#include<conio.h>
int main()
{
    float len, bre, area;
    printf("Enter Length of Rectangle: ");
    scanf("%f", &len);
    printf("Enter breadth of Rectangle: ");
    scanf("%f", &bre);
    area = len*bre;
    printf("\nArea = %0.2f", area);
    getch();
    return 0;
}
