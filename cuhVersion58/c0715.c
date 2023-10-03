// c0715.c
#include <stdio.h>
char (*p)(char);
char f(char c)
{
   return c+1;   
}
int main()
{
   p = f;
   printf("%c\n", f('a'));
   printf("%c\n", p('a'));
   return 0;
}
