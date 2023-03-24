#include <stdio.h>

int main()
{
    FILE *fp;
    int length;
    fp=fopen("abc.txt","r");
    fseek(fp,0,SEEK_END);
    length=ftell(fp);
    fclose(fp);
    printf("sizeof file=%d",length);
}

