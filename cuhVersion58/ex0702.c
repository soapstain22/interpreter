// ex0702.c Pointers to local variables
#include <stdio.h>
int main()
{
   int *p, x = 7;
   p = &x;
   printf("%d\n", *p);
   *p = 8;
   printf("%d\n", x);
   return 0;
}
