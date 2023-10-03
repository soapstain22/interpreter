// c0609.c
#include <stdio.h>
void f(int x)
{
   if (x == 0) 
   {
      printf("hello\n");
      return;
   }
   printf("good\n");
   f(x - 1);
   printf("bad\n");
   f (x - 1);
   printf("so so\n");
}
int main()
{
   f(3);
   return 0;
}
