// c0812.c
#include <stdio.h>
void f(int #x)
{
   printf("%d\n", x);
}
int g()
{
   int y = 5;
   return y + 3;
}
int main()
{
   int x = 7;
   f(x+g());
   return 0;
}
