// c0402.c
#include <stdio.h>
void g()
{
   printf("in g\n");
}
void f(void)
{
   printf("up\n");
   g();
   printf("down\n");
}
int main()
{
   printf("hello\n");
   f();
   printf("goodbye\n");
   return 0;
}
