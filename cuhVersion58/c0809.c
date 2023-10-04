// c0809.c
#include <stdio.h>
void f(int #x)
{
    x = x + 5;
}
int main()
{
   int x = 7;
   f(x);
   printf("%d\n", x);
   return 0;
}
