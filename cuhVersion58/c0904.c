// c0904.c
#include <stdio.h>
struct B
{
   char c;
};
struct A 
{
   int x;
   struct B y;
};
struct A s;
void f()
{
   struct A *p;
   p = &s;
   s.x = 1;
   s.y.c = 'A';
   printf("%d\n", p->x);
   printf("%c\n", (p->y).c);
   printf("%c\n", (*p).y.c);
}
int main()
{
   f();
   return 0;
}
