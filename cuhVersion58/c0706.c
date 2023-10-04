// c0706.c
#include <stdio.h>
int x = 3, y = 5;
void f()
{
   static int *p = &x;
   printf("%d\n", *p);
   p++;
}   
int main()
{
   f();
   f();
   return 0;
}
