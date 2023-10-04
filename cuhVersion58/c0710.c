// c0710.c
#include <stdio.h>
int x = 3, y = 5, *p, *q;
int main()
{
   int temp;
   p = &x;
   q = &y;
   temp = *p;
   *p = *q;
   *q = temp;
   printf("%d %d\n", x, y);
   return 0;
}
