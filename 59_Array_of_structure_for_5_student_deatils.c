#include <stdio.h>
struct student 
{
    int roll;
    char name[20];
};
int main()
{
    struct student std[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("enter roll %d",i+1);
    scanf("%d",&std[i].roll);
    printf("enter name %d",i+1);
    scanf("%s",std[i].name);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",std[i].roll,i+1);
        printf("%s\n",std[i].name,i+1);
    }
}
    
