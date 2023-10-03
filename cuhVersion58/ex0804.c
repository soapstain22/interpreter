// ex0804.c   Pass by name (not supported by C)
#include <stdio.h>
int a = 1;
void f(int #x)
{
   printf("%d\n", x);
   a = a + 2;
   printf("%d\n", x);
}
//===================
int main()
{
   int b = 2;
   f(a+b);
   return 0;
}
