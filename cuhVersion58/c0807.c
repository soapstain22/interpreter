// c0807.c
#include <stdio.h>
int a = 5, b = 5;
void f(int #x)
{
   a = x;
   b = x;
}
int main()
{
   f(a+b);
   printf("a = %d\n", a);
   printf("b = %d\n", b);
   return 0;
}
