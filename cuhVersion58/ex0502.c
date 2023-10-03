// ex0502.c  Dynamic local variables
#include <stdio.h>
void f(int a)
{
   int x = 1, y;
   y = x + a;
   printf("%d\n", y);
}
//==============================
int main()
{
   f(11);
   return 0;
}
