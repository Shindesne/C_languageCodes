#include <stdio.h>

int main()
{
    char a[30];
    gets(a);
    puts(strchr(a,'w'));
}
