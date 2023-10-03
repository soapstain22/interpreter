// c0606.c
#include <stdio.h>
void f(int x)
{
   if (x < 0)
   {
      printf("%d\n", x);
      f(x-1);
      printf("hello\n");
      f(x-1);
      printf("goodbye\n");
   }
}
int main()
{
   f(3);
   return 0;
}
