// c1205a.c
#include <stdio.h>
void g(int *);
static void f(int x)
{
   printf("%d\n", x);
}
int main()
{
   int x;
   int y = 20;
   f(y);
   g(&x);
   printf("%d\n", x);
   return 0;
}











