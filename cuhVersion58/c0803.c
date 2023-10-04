// c0803.c
#include <stdio.h>
int a, b;
void f(int x, int *p)
{
   x = 44;
   *p = 55;
}
int main()
{
   f(a, &b);
   printf("%d %d\n", a, b);
   return 0;
}