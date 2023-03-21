#include <stdio.h>

int main()
{
    char a[10],b[10];
    puts("enter the string");
    gets(a);
    gets(b);
    puts(strcat(a,b));
}
