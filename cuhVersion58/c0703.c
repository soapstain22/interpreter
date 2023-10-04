// c0703.c
#include <stdio.h>
int x = 7, *p, *q;
int main()
{
   p = &x;
   q = p;
   *q = 20;
   printf("%d\n", *p);
   return 0;
}
