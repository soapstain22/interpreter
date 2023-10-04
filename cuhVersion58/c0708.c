// c0708.c
#include <stdio.h>
int x = 3;
void f(int *p)
{
   *p = *p + 1;
   printf("%d\n", *p);
}   
int main()
{
   
   f(&x);
   return 0;
}
