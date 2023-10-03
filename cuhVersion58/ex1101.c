// ex1101.c  Multiplication
#include <stdio.h>
int slowmul(int x, unsigned int y)
{
   int product = 0;
   while (y)
   {
      product = product + x;
      y--;
   }
   return product;
}
//==================================
int mul(int x, unsigned int y)
{
   int product = 0;
   while (y)
   {
      if (y & 1)
         product = product + x;
      y = y >> 1;
      x = x << 1;
   }
   return product;
}
//==================================
int main()
{
   printf("%d\n", slowmul(7, 255));
   printf("%d\n", mul(7, 255));
   return 0;
}

