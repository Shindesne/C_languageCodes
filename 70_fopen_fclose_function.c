#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("abc.txt","w");
    printf("input line and press EOF");
    while((ch=getchar())!=EOF)
    {
      putc(ch,fp);  
    }
    fclose(fp);
    printf("output");
    fp=fopen("abc.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}
    
