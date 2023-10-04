// ex0802.c  Pass by address
#include <stdio.h>
int x = 7;
void f(int *p)
{
   *p = *p + 1;
}
//===================
int main()
{
   f(&x);
   printf("%d\n", x);
   return 0;
}
