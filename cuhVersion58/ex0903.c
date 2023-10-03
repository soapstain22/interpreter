// ex0903.c  Passing structs
#include <stdio.h>
struct Point
{
   int x;
   int y;
};
struct Point a;
//===============================
void f(struct Point s)
{
   printf("%d %d\n", s.x, s.y);
}
//===============================
void g(struct Point *p)
{
   printf("%d %d\n", p->x, p->y);
}
//===============================
int main()
{
   a.x = 1;
   a.y = 2;
   f(a);
   g(&a);
}   
