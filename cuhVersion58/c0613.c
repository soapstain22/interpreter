// c0613.c
#include <stdio.h>
int a(int x, int y)
{
   if (x == 0)
      return y + 1;
   if (x > 0 && y == 0)
      return a(x - 1, 1);
   return a(x - 1, a(x, (y - 1)));
}
int main()
{
   a(2, 2);
   return 0;
}
