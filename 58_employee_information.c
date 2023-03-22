#include <stdio.h>
struct  emp
{
    char n[80];
    char address[200];
    long phone;
};
struct emp e;
int main()
{
    printf("enter emp name");
    scanf("%s",&e.n);
    printf("enter emp address");
    scanf("%s",&e.address);
    printf("enter phone no");
    scanf("%d",&e.phone);
    printf("name is %s",e.n);
    printf("address is %s",e.address);
    printf("phone is %d",e.phone);
    
}
