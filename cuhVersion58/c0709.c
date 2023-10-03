// c0709.c
#include <stdio.h>
int x = 3, *p, **q, ***r;
int main()
{
   
   p = &x;
   q = &p;
   r = &q;
   printf("%d\n", ***r);
   return 0;
}
