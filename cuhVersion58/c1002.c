// c1002.c
#include <stdio.h>
int x, a[10], b[10] = { 2, 3, 4 };
void f()
{
   int c[10];

   a[x] = 1;
   b[x+1] = 2;
   c[x+2] = 3;
   printf("%d\n", c[2]);
}
int main()
{
   f();
   printf("%d %d\n", a[0], b[1]);
   return 0;
}
