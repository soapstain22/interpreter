// c1001.c
#include <stdio.h>
int n = 20, z[] = { 100, 101, 102 };
void g(int a[])
{
   a[1] = a[1] + 5;
   printf("%d\n", a[1]);
}
void f(int x)
{
   x = x + 3;
   printf("%d\n", x);
}
int main()
{
   f(n);
   g(z);
   return 0;
}
