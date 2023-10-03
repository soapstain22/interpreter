// c0508.c
#include <stdio.h>
void f()
{
   int x;
   x = 1;
   printf("%d\n", x); 
} 
void g() {
   f();
}
int main()
{
   f();
   g();
   return 0;
}       
