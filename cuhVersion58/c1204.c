// c1204.c
#include <stdio.h>
int x = 5;
static int y;
static void f(int *p)
{
   *p = 5;
}
int main()
{
   static int a = 1;
   int b = 2;
   f(&x);
   f(&y);
   f(&a);
   f(&b);
   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", x);
   printf("%d\n", y);
   return 0;
}
