// c0702.c
#include <stdio.h>
int main()
{
   int *p;
   int x = 3, y = 5;
   p = &y;
   printf("%d\n", *p);
   p = p+1;
   printf("%d\n", *p);
   printf("%d\n", *(p-1));
   return 0;
}
