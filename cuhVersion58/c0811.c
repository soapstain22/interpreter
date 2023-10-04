// c0811.c
#include <stdio.h>
void f(int #x)
{
    if (x > 0)
    {
       printf("%d\n", x);
       f(x - 1);
    }
}
int main()
{
   int x = 7;
   f(x);
   printf("%d\n", x);
   return 0;
}
