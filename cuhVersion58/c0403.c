// c0403.c
#include <stdio.h>
void f(int x, int y, int z)
{
   printf("%d %d %d\n", x, y, z);
}
int main()
{
   f(1, 2, 3);
   printf("goodbye\n");
   return 0;
}
