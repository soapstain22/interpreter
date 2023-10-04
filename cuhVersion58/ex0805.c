// ex0805.c   Pass by name (not supported by C)
#include <stdio.h>
int a;
void f(int #x)
{
   x = 5;
}
//===================
int main()
{
   f(a);
   return 0;
}
