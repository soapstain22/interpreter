// ex0602.c  Recursion example 1 (tail recursive)
#include <stdio.h>
void rf1(int x)
{
   if (x != 0)
   {
      printf("%d\n", x);
      rf1(x - 1);        // recursive call
   }
}
// =====================
int main()
{
   rf1(2);
   return 0;
}
