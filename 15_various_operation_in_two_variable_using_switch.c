#include <stdio.h>

int main()
{
   int a,b,choice,add,sub,div,mod,mul;
   scanf("%d%d",&a,&b);
   printf("enter choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
       add=a+b;
       printf("Addition=%d",add);
       break;
       case 2:
       sub=a-b;
       printf("substraction=%d",sub);
       break;
       case 3:
       mul=a*b;
       printf("multiplication=%d",mul);  
       break;
       case 4:
       div=a/b;
       printf("division=%d",div);
       break;
       case 5:
       mod=a%b;
       printf("modulous=%d",div);
       break;
       default:
       printf("Invalid case");
   }
}

