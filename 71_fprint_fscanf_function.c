#include <stdio.h>
int main()
{
    FILE *f;
    int roll;
    char name[10];
    f=fopen("student.txt","w");
    printf("enter roll no");
    scanf("%d",&roll);
    printf("enter the name");
    scanf("%s",&name);
    fprintf(f,"%d\n%s",roll,name);
    fclose(f);
    f=fopen("student.txt","r");
    fscanf("f,%d%s",&roll,&name);
    printf("student roll no%d",roll);
    printf("student name %s",name);
    fclose(f);
}
