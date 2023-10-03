// ex0703.c  Pointers to functions
#include <stdio.h>
int sum;
int (*p)(int, int);
int f(int x, int y)
{
   return x+y;
}
//===================
int main()
{
   sum = f(1, 2);
   printf("%d\n", sum);
   p = f;
   sum = p(1, 2);
   printf("%d\n", sum);
   return 0;
}
