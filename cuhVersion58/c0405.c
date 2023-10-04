// c0405.c
#include <stdio.h>
void g(int x, int y)
{
   printf("%d %d\n", x, y);
}
void f(int x, int y)
{
   g(x, y);
}
int main()
{
   f(3, 4);
   return 0;
}
