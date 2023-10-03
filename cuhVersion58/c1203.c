// c1203.c
#include <stdio.h>
int r = 5;
static int s;
static void f(int a, int b)
{
   s = a + b + r;
}
int main()
{
   int q = -15;
   f(q, q + 8);
   printf("r = %d\n", r);
   printf("s = %d\n", s);
   printf("q = %d\n", q);
   return 0;
}
