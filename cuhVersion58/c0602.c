// c0602.c
#include <stdio.h>
int x;
int main()
{
   printf("enter\n");
   scanf("%d", &x);
   if (x >= 5)
      printf("hello\n");
   if (x <= -6)
      printf("small\n");
   else 
   {
      printf("big\n");
      if (x > 30)
         printf("really big\n");
   }
   return 0;
}
