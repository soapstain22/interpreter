// ex0102.c  Floating-point errors
#include <stdio.h>
int main()
{
   double x = 1E70;    // 1070
   double y = 1E5;     // 105
   if (x == x + y)
      printf("y must be zero\n");  // displayed but y is not zero
   else
      printf("y must be non-zero\n");
   return 0;
}
