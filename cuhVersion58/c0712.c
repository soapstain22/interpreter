// c0712.c
#include <stdio.h>
int x, y, *p, *q;
int main()
{
   p = &x;
   q = p + 1;
   printf("%d\n", q-p);
   x = (int)p;
   y = (int)q;
   printf("%d\n", x-y);
   return 0;
}
