// c1008.c
#include <stdio.h>
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
void f(int a[])
{
   int *last = a + 9;
   while (a <= last)
   {
      printf("%d\n", *a++);;
   }
}
int main()
{
   f(a);
}
