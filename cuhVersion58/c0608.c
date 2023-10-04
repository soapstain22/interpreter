// c0608.c
#include <stdio.h>
int mult(int x, int y)
{
   if (y == 0)
      return 0;
   return mult(x, y - 1)  + x;
}
int expt(int x, int y)
{
   if (y == 0)
      return 1;
   return mult(exp(x, y-1), x);
}
int main()
{
   printf("%d\n", expt(2,3));
   return 0;
}
