// c0813.c
#include <stdio.h>
#include <stdarg.h>
int getmax(int c, ...)
{
   int maxval, nextval;
   va_list p;
   va_start(p, c);
   maxval = va_arg(p, int);
   while (--c)
   {
      nextval = va_arg(p, int);
      if (nextval > maxval)
         maxval = nextval;
   }
   return maxval;
}
int main()
{
   printf("%d\n", getmax(1,-200));
   printf("%d\n", getmax(5, 1, 2, 300, 4, 5));
   return 0;
}
