// ex0503.c
#include <stdio.h>
int x = 5;
void f()
{
   static int x;
   printf("%d\n", x);
}
void g()
{
   printf("%d\n", x);
}
int main()
{
   static int x = 3;
   printf("%d\n", x);
   f();
   g();
   return 0;
}
