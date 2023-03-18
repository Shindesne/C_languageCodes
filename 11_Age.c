#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age"); 
    scanf("%d",&age); 
    if (age< 18)
    {
     printf("The age is child");
    }
    else if (age>=18 && age <=35)
    {
      printf("The age is young");
    }
    else if (age >35)
    {
        printf("The age is old");
    }
}
