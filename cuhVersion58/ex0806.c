// ex0806.c  Variable-length argument list
#include <stdio.h>
#include <stdarg.h>
int add(int argnum, ...)
{
   int sum = 0;
   va_list p;
   va_start(p, argnum);
   while (argnum)
   {
      sum = sum + va_arg(p, int);
      argnum--;
   }
   return sum;
}
//==============================
int main()
{
   int y;
   y = add(2, 5, 7);
   printf("%d\n", y);
   return 0;
}
