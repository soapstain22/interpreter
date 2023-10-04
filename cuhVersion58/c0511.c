// c0511.c
#include <stdio.h>
int x = 99;
void f(int x)
{
   ++x;
}
int main()
{
   f(++x);
   printf("%d\n", x);
   f(x++);
   printf("%d\n", x);
   return 0;
}        
