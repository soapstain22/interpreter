// c0512.c
#include <stdio.h>
int x, y, z = 6;
void f(int a, int b, int c)
{
   static int h, i, j;
   b = c = h = i = ++j;
   printf("%d %d\n", a, b);
}
int main()
{
   x = 1;
   y = 2;
   f(x, y, z);
   f(z, y, z);
   return 0;
}        
