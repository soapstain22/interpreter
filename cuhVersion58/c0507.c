// c0507.c
#include <stdio.h> 
void f()
{
   static int x = 2;
   int y = 3, z = 5;
   printf("%d %d %d\n", x, y, z);
   x = 1;
   y = 2;
   z = 3; 
}
void g() 
{
   static int x = 44;
   int y = 50;
   printf("%d %d\n", x, y);
   y = 22;
   x = y;
}
int main()
{
  f();
  f();
  g();
  g();
  return 0;
}
