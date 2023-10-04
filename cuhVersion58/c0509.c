// c0509.c
#include <stdio.h>
int x = 1, y = 2;
void f(int x)
{
   int y = 7;
   x = y;
   printf("%d %d\n", x, y);
}
int main() 
{
   f(x);
   f(y);
   printf("%d %d\n", x, y);
   return 0;
}        
