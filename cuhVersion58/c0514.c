// c0514.c
#include <stdio.h>
int x, y = 5;
void f(int x, int y)
{
   int p, q = 8;
   static int s, t = 17;
   p = q++;
   s = t++;
   x = ++y;
   printf("%d %d %d %d\n", p, q, s, t);
}
int z;
int main()
{
   z = 5;
   f(x, y);
   printf("%d %d %d\n", x, y, z);
   f(y, x);
   printf("%d %d %d\n", x, y, z);
   return 0;
}        
