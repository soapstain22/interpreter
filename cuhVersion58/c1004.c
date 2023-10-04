// c1004.c
#include <stdio.h>
int a[10];
void f()
{
   int b[10];
   static int c[10];
   int *p, *q, *r, *s, *t, *u;

   p = a;
   q = b;
   r = c;
   *p = 10;
   *q = 11;
   *r = 12;
   s = &a[3];
   t = &b[3];
   u = &c[3];
   *s = 1;
   *t = 2;
   *u = 3;
   printf("%d %d\n", a[0], a[3]);
   printf("%d %d\n", b[0], b[3]);
   printf("%d %d\n", c[0], c[3]);
}
int main()
{
   f();
   return 0;
}
