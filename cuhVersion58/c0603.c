// c0603.c
#include <stdio.h>
int x, y;
int main()
{
   printf("enter\n");
   scanf("%d", &x);
   printf("enter\n");
   scanf("%d", &y);
   if (x >= y)
      printf("hello\n");
   else
      printf("bye\n");
   return 0;
}
