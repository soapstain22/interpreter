// ex0701.c Pointers to global variables
#include <stdio.h>
int *p, x = 7;
int main()
{
   p = &x;
   printf("%d\n", *p);
   *p = 8;
   printf("%d\n", x);
   return 0;
}
