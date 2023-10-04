// c0814.c
#include <stdio.h>
void f(int $x, int y)
{
   y++;
   x = y;
}
int main()
{
   int a = 5, b = 10;
   f(a, b);
   printf("a = %d b = %d\n", a, b);
   return 0;
}
