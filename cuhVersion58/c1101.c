// c1101.c 
#include <stdio.h>
int main()
{
   int x = 11, y = 5;
   printf("%d %d\n", x/y, x%y);
   x = -11; y = 5;
   printf("%d %d\n", x/y, x%y);
   x = 11; y = -5;
   printf("%d %d\n", x/y, x%y);
   x = -11; y = -5;
   printf("%d %d\n", x/y, x%y);
   return 0;
}
