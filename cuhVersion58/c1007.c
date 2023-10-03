// c1007.c
#include <stdio.h>
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
void f(int a[])
{
   int i = 0;
   while (i < 10)
   {
      printf("%d\n", a[i]);;
      i++;
   }
}
int main()
{
   f(a);
}
