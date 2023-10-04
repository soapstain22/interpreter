// ex1002.c  Passing arrays
#include <stdio.h>
int a[2];
void f1(int a[])
{
   printf("%d\n", a[1]);
}
//========================
void f2(int *a)
{
   printf("%d\n", *(a+1));
}
//========================
void f3(int a[])
{
   printf("%d\n", *(a+1));
}
//========================
void f4(int *a)
{
   printf("%d\n", a[1]);
}
//========================
int main()
{
   a[1] = 99;
   f1(a);
   f2(a);
   f3(a);
   f4(a);
   return 0;
}
