// c1006.c
#include <stdio.h>
int table[] = {5, 6, 7};
int *p;
int main()
{
   p = &table[1];
   p[1] = 55;
   printf("%d\n", *(p+1));
   return 0;
}
