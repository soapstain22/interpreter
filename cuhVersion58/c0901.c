// c0901.c
#include <stdio.h>
struct A 
{
   int x, y;
};
struct A s;
void f()
{
   struct A *p;
   p = &s;
   p->x = 1;
   p->y = 2;
   printf("%d\n", s.x);
   printf("%d\n", s.y);
}
int main()
{
   f();
   return 0;
}
