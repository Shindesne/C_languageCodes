#include <stdio.h>
union book
{
    int pages;
    char bname[20];
}b1;
int main()
{
    printf("enter the pages");
    scanf("%d",&b1.pages);
    printf("enter book name");
    scanf("%s",&b1.bname);
    printf("%d",b1.pages);
    printf("%s",b1.bname);
}

