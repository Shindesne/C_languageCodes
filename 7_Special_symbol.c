#include <stdio.h>

int main()
{
   char a;
   printf("enter the char"); 
   scanf("%c", &a);
   if((a>='a'&&a<='z')||(a>'A'&&a<='Z'))
  {
    printf("it is alphabet");
  }
    else if (a>='0'&& a<='9')
  {
  printf("it is number");
  }
else
  {
printf("it is special symbol");
  }
}
