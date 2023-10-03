// c0714.c
#include <stdio.h>
char (*p)(void);
char f()
{
   return 'A';   
}
int main()
{
   p = f;
   printf("%d\n", f());
   printf("%d\n", p());
   return 0;
}
