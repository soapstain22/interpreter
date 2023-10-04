//c1003.c
#include <stdio.h>
int a[5];
void f()
{
   int b[5];
   static int c[5];
   a[0] = 1;
   b[1] = 3;
   c[3] = 22;
   c[b[a[0]]] = 12;
   printf("%d\n", c[3]);
}
int main()
{
   f();
   return 0;
}
