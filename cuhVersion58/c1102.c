// c1102.c
int ans, x, y, z;
#include <stdio.h>
int main()
{
   printf("Enter three positive integers: ");
   scanf("%d%d%d", &x, &y, &z);
   ans = x*y/z + z/x + y/z;
   printf("ans = %d\n", ans);
   return 0;
}
