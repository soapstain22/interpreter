// z2.c
#include <stdio.h>
extern int x;
int y = 7;
void g(void)   
{
   printf("%d\n", y);
}
//===================
void f(void)
{
   printf("%d\n", x);
   g();

}
