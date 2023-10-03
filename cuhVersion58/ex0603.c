// ex0603.c  Recursion example 2 (not tail recursive)
#include <stdio.h>
void r2(int x)
{
   if (x == 0)
      printf("bottom\n");
   else 
   {
      printf("down\n");
      r2(x-1);
      printf("up\n");
   }
}
//=======================
int main()
{
   r2(2);
   return 0;
}
