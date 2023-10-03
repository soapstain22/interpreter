// c0513.c
#include <stdio.h>
int x, y = 5;
void f(int x)
{
   int y;
   y = x + 3;
   printf("%d %d\n", x, y);
}
int main()
{
   printf("%d %d\nEnter number: ", x, y);
   scanf("%d", &y);
   f(y);
   printf("%d %d\n", x, y);
   return 0;
}        
