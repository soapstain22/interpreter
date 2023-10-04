// c0903.c
#include <stdio.h>
struct A 
{
   int x, y;
};
struct A s;
void f(struct A a, struct A *p)
{
   p->x = a.y;
   a.y = p->x;
   printf("%d\n", a.x);
   printf("%d\n", (*p).y);
}
int main()
{
   struct A a;
   a.x = 1;
   a.y = 2;
   f(a, &a);
   return 0;
}
