// c1010.c  Are strings constants mutable?
#include <stdio.h>
int main()
{
   char *p =  "123";
   char *q =  "123";
   char a[] = "123";
   *p = 'X';
   *(q+1) = 'Y';
   a[2] = 'Z';
   printf("%s\n", p);
   printf("%s\n", q);
   printf("%s\n", a);
   return 0;
}
