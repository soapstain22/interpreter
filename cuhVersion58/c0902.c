// c0902.c
#include <stdio.h>
#include <stdlib.h>
struct A 
{
   int x;
   char c;
};
struct A *p;
void f()
{
   p = (struct A *)malloc(sizeof(struct A));
   p->x = 1;
   p->c = 'A';
}
int main()
{
   f();
   printf("%d\n", p->x);
   printf("%c\n", p->c);
   return 0;
}
