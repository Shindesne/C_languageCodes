#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("file1.txt","w");
    fputc('g',fp);
    fclose(fp);
    fp=fopen("File1.txt","r");
    while((c=getc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
    }
