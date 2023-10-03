// c1009.c  Initializing Arrays
#include <stdio.h>
int  a[]  = {1, 2};
int  b[5] = {1, 2};   
char c[]  = {'1', '2'};
char d[]  = {'1', '2', '\0'};
char e[]  = "12";
int main()
{
   char f[] = "12";
   printf("%s\n", d);
   printf("%s\n", e);
   printf("%s\n", f);
   printf("%s\n", "12");
   return 0;
}
