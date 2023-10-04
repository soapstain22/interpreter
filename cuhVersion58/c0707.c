// c0707.c
#include <stdio.h>
int x = 3;
int *f(int x)
{
   int *p;
   p = &x;
   return p;
}   
int main()
{
   
   printf("%d\n", *f(7));
   return 0;
}
