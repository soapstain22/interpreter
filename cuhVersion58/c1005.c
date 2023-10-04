// c1005.c
#include <stdio.h>
void f()
{
   int a[500];
   a[499] = 56;
   printf("%d\n", a[499]);
}
int main()
{
   f();
   return 0;
}
