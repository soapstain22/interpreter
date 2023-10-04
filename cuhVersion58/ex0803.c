// ex0803.c  Pass by Value-Result (not supported by C)
#include <stdio.h>
int x = 7;
void f(int $a)    // a is a value-result parameter
{
   a = a + 1;
}
//===================
int main()
{
   f(x);
   printf("%d\n", x);
   return 0;
}
