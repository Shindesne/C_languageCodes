#include <stdio.h>
struct book
{
    char title[45];
    int pages;
}
s={"cpp",300};
int main()
{
    printf("title=%s",s.title);
    printf("pages=%d",s.pages);
}
