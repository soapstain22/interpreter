// c0705.c
#include <stdio.h>
int main()
{
   static int x = 5, *p;
   p = &x;
   *p = *p + 3;
   printf("%d\n", *p);
   return 0;
}
