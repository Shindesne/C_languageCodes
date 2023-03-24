#include <stdio.h>

int main()
{
    FILE*fp;
    fp=fopen("myfile.txt","w++");
    fputs("dista computer",fp);
    fseek(fp,7,SEEK_SET);
    fputs("Dhanashree",fp);
    fclose(fp);
}
