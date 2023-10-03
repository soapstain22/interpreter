// c0815.c
#include <stdio.h>
void g(int $y)
{
   y = 99;
}
void f(int $x)
{
   f(x);
}
int main()
{
   int a = 5;
   f(a);
   printf("a = %d\n", a);
   return 0;
}
