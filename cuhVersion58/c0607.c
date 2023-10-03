// c0607.c
#include <stdio.h>
void f(int x)
{
   if (x < 10)
   {
      printf("%d\n", x);
      f(x + 1);
      printf("hello\n");
   }
}
int main()
{
   f(-1);
   return 0;
}
