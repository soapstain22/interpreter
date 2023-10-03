// c0905.c
#include <stdio.h>
struct S 
{
   int x, y, z;
};
struct S b;
struct S f()
{
   struct S a;
   a.x = a.y = a.z = 5;
   return a;   // return via the stack
}
int main()
{
   b = f();   // allocate space on stack to hold return value
   printf("%d %d\n", b.x, b.y);
   return 0;
}
