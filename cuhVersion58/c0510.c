// c0510.c
#include <stdio.h>
int x = 1, y = 2, z = 3;
void f(int x)
{
   int y = 7;
   x = y;
   printf("%d %d\n", x, y);
   int z = 8;
   x = z;
   printf("%d %d\n", x, z);
}
int main()
{
   f(x);
   printf("%d %d %d\n", x, y, z);
   return 0;
}        
