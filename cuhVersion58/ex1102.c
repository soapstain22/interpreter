// ex1102.c  Division
#include <stdio.h>
short div(int x, unsigned int y)
{
   int quotient = 0;
   while (1)
   {
      x = x - y;
      if (x < 0)
         break;
      quotient++;
   }   
   return quotient;
}
//==================================
int main()
{
   printf("%d\n", div(77, 7));
   return 0;
}
