#include <stdio.h>
struct student
{
    char name[20];
    int roll;
};
int main()
{
    struct student stu;
    struct student *p;
    p=&stu;
    printf("enter student name");
    scanf("%s",&p);
    printf("enter  the roll no");
    scanf("%d",&p);
    printf("student name=%s",(*p).name);
    printf("student roll no=%d",(*p).roll);
}
