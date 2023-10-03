// c0802.c
#include <stdio.h>
char gc;
int  gi;
void f(char c, int i, char *cp, int *ip)
{
   c = 'A';
   i = 2;
   *cp = 'B';
   *ip = 3;
}
int main()
{
   f('X', 5, &gc, &gi);
   printf("gc = %d gi - %d\n", gc, gi);
   return 0;
}