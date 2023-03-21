#include <stdio.h>
void sum(int,int);
void sum(int x,int y)
{
    if(x>40)
    {
        return;
    }
    x=x+y;
    sum(x,y);
    printf("x=%d\n",x);
}
  int main()
  {
      int z=10;
      sum(z,z++);
      printf("x=%d",z);
  }
  
