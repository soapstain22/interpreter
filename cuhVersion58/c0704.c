// c0704.c
#include <stdio.h>
void g(int *b)
{
   printf("%d\n", *b);
}
void f(int *a)
{
   g(a);
}
int main()
{
   int x = 5, *p;
   p = &x;
   f(p);
   return 0;
}
