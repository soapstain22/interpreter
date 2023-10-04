// c0701.c
#include <stdio.h>
int x = 3, y = 5;
int main()
{
   int *p;
   p = &x;
   printf("%d\n", *p);
   p = p+1;
   printf("%d\n", *p);
   printf("%d\n", *(p-1));
   return 0;
}
