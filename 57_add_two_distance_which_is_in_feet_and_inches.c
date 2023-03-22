#include <stdio.h>
struct distance
{
    int feet;
    float inch;
} dist1,dist2,sum;
int main()
{
    printf("1st distance\n");
    printf("enter the feet:");
    scanf("%d",&dist1.feet);
    printf("enter the inch:");
    scanf("%f",&dist1.inch);
    printf("2nd distance\n");
    printf("enter the feet");
    scanf("%d",&dist1.feet);
    printf("enter the inch:");
    scanf("%f",dist2.inch);
    sum.feet=dist1.feet+dist2.feet;
    sum.inch=dist1.inch+dist2.inch;
    //changing feet if inch is greater than 12
    while(sum.inch>=12)
    {
        ++sum.feet;
        sum.inch=sum.inch-12;
    }
    printf("sum of distance =%d\'-'%f\"",sum.feet,sum.inch);
}
