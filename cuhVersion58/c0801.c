// c0801.c
#include <stdio.h>
int g = 20;
void f1(int x)
{
   x = x + 5;
   printf("x = %d\n", x);
}
void f2(int *p)
{
   *p = 3;
}
void f3(int *p, int x)
{
   *p = x;
}
int main()
{
   printf ("g = %d\n", g);
   f1(g);
   printf ("g = %d\n", g);
   f2(&g);
   printf ("g = %d\n", g);
   f3(&g, 20);
   printf ("g = %d\n", g);
   return 0;
}