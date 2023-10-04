// c0406.c
#include <stdio.h>
void f(short x)
{
   printf("%hd\n", x); 
   printf("%hu\n", x);   // %hu conversion code for unsigned short
}
int main()
{
   f(60000);
   f(-1);
   return 0;
}
