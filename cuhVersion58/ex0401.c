// ex0401.c  Calling a function
#include <stdio.h>
void f(int x, int y)
{
   printf("%d\n", x + y);
}
//===================================
int main()
{
   f(1, 2);
   return 0;
} 
