// ex0601.c  while Statement
#include <stdio.h>
void nr(int x)
{
   while (x != 0)
   {
      printf("%d\n", x);
      x = x - 1;
   }
}
//======================
int main()
{
   nr(2);
   return 0;
}
