//c0805.c
#include <stdio.h>
int x = 3;
void f(int *p)
{
   printf("%d\n", *p);
}
void g(int *p)
{
   f(p);
}
int main()
{
   g(&x);
   return 0;
}       