// c0810.c
#include <stdio.h>
void f(int #x, int #y)
{
    x = x + y;
}
int main()
{
   int x = 7;
   f(x, x+3);
   printf("%d\n", x);
   return 0;
}
