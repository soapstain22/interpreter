// c0713.c
#include <stdio.h>
void (*p)(int);
void f(int x)
{
   printf("%d\n", x);   
}
int main()
{
   p = f;
   f(1);
   p(1);
   return 0;
}
