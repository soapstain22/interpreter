// c0808.c
#include <stdio.h>
int a = 100;
void f(int #x)
{
    a = x + 5;
}
void g(int z)
{
   int y = 1;
   f(y + 20);
   printf("a = %d\n", a);
   printf("y = %d\n", y);
   f(z + 20);
   printf("a = %d\n", a);
   printf("y = %d\n", y);
}
int main()
{
   g(7);
   return 0;
}
