// c0804.c
#include <stdio.h>
int x = 1;
void f(int *p)
{
   *p++;
   printf("%d\n", x);
   *(p++);
   printf("%d\n", x);
   (*p)++;
}
int main()
{
   f(&x);
   printf("%d\n", x);
   return 0;
}