// ex0801.c  Pass by value
#include <stdio.h>
int x = 7;
void f(int a)
{
   a = a + 1;
   return;
}
//===================
int main()
{
   f(x);
   printf("%d\n", x);
   return 0;
}
